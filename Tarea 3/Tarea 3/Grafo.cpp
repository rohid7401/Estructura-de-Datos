#include "Grafo.h"

Grafo::Grafo(int numeroVertices):Arreglo(numeroVertices)
{
	NumeroVertices = numeroVertices;
}

Grafo::~Grafo()
{
	//delete Arreglo;
}

void Grafo::SetArista(int verticeI, int verticeJ, int peso)
{
	Arreglo[verticeI].push_back(std::pair<int, int>(verticeJ, peso));
}

int Grafo::GetArista(int verticeI, int verticeJ)
{
	for (auto k : Arreglo[verticeI]) {
		if (k.first == verticeJ) {
			return k.second;
			}
	}

	return ValorVacia();
}


int Grafo::ValorVacia()
{
	return std::numeric_limits<int>::max();
}


std::string Grafo::ToString()
{
	std::stringstream ss;

	for (int i = 0; i < NumeroVertices; i++) {
		for (auto k : Arreglo[i]){		
			int j = k.first;

			if (GetArista(i, j) == ValorVacia()) {
				ss << "-   ";
			}
			else {
				ss << k.second << "   ";
			}
		}
		ss << std::endl;
	}
	return ss.str();
}
