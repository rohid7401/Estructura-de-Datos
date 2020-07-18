#include <iostream>
#include "Grafo.h"

int main()
{
    Grafo g(15);
    g.SetArista(0, 1, 1);
    g.SetArista(1, 12, 12);
    g.SetArista(2, 5, 25);
    g.SetArista(5, 0, 50);

    std::cout << g.ToString() << std::endl;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
