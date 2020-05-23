#include <iostream>

using namespace std;

class pasajero{
	public:	
		pasajero(bool est,short eda,bool gen, string ni)
		{			
			estatus = est;
			edad = eda;
			genero = gen;
			nick = ni;
			siguiente = NULL;
		}
	
	private:
		string nick;
		bool genero;
		bool estatus;
		short edad;
		short prioridad;
		pasajero* siguiente;

	friend class cola;
};


typedef pasajero *pnodo;

class cola{
	public:
    	cola() { primero = actual = NULL; }
    	bool ColaVacia() { return primero == NULL; } 
		void IngresarCola(bool est,int eda,bool gen, string ni);
		int getPrioridad(bool est,int eda, bool gen);
		void Mostrar();
		pnodo Ultimo();

    
   private:
    pnodo primero;
    pnodo actual;
};



void cola::IngresarCola(bool est,int eda,bool gen, string ni){
	pnodo nuevo = new pasajero(est,eda,gen, ni);
	nuevo->prioridad = getPrioridad(est,eda,gen);
	if (ColaVacia()){
    	primero = nuevo;
	}
   else{
		pnodo aux= primero;

       if (nuevo->prioridad >= aux->prioridad){
           nuevo->siguiente = primero;
           primero= nuevo;
       }
	    else{
	    	int v = 0;
	        while(aux->siguiente != NULL ){
	           if (aux->prioridad > nuevo->prioridad and aux->siguiente->prioridad <= nuevo->prioridad){
	           		pnodo dos = aux->siguiente;
	           		aux->siguiente = nuevo;
	           		nuevo->siguiente = dos;
	           		v = 1;
	            	aux= Ultimo();
	            	
	           }
		        else{
		            aux= aux->siguiente;
		        }
			}
			if (v == 0){
    			aux->siguiente= nuevo;
    		}
		}
	}
}

/* PRIORIDAD
   niña   3
   niño   2
   mujer  1
   hombre 0
   estatus +1 
*/
int cola::getPrioridad(bool est,int eda, bool gen){
int valor;
    if (gen){                      //mujer
    	if (est){                  //rica
    		if (eda < 18){         //niña
    			return 4;
			}
			
			else return 2;
		}	
		
		else{                     //no rica
    		if (eda < 18){        //niña
    			return 3;
			}
			
			else return 1;
		}	
	}
	
	else{                         //hombre
    	if (est){                 //rico
    		if (eda < 18){        //niño
    			return 3;
			}
			
			else return 1;
		}	
		
		else{                    //no rico
    		if (eda < 18){       //niño
    			return 2;
			}
			
			else return 0;
		}	
	}
}


pnodo cola::Ultimo(){
   pnodo aux = primero;
   if(!ColaVacia()) {
           while(aux->siguiente!=NULL) {
           aux=aux->siguiente;
           }
           return aux;
   }

}


void cola::Mostrar(){
    pnodo aux;
   if (primero == NULL)
       cout << "No hay pasajeros" <<endl;
   else{
        aux = primero;
        while(aux){
            cout << aux->nick << "-> ";
            aux = aux->siguiente;
        }
        cout << endl;
   }
}

int main()
{
	cola Cola;
	
	Cola.IngresarCola(1,11,1, "Fn$");
	Cola.IngresarCola(0,17,1, "Fn");
	Cola.IngresarCola(1,10,0, "Hn$");
	Cola.IngresarCola(1,45,1, "F$");
	Cola.IngresarCola(0,16,0, "Hn");
	Cola.IngresarCola(0,20,1, "F");
	Cola.IngresarCola(1,31,0, "H$");
	Cola.IngresarCola(0,25,0, "H");
	Cola.IngresarCola(1,56,0, "H$");
	Cola.IngresarCola(0,15,1, "Fn");
	
	
    Cola.Mostrar();

   cin.get();
   return 0; 
}
