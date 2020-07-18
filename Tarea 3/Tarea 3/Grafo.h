#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

class Grafo
{
public:
	std::vector<std::vector<std::pair<int, int>>> Arreglo;
	int NumeroVertices;

	Grafo(int numeroVertices);
	~Grafo();

	void SetArista(int verticeI, int verticeJ, int peso);
	int GetArista(int verticeI, int verticeJ);

	int ValorVacia();
	std::string ToString();
	  
};

