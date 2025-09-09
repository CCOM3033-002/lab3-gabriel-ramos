/*
Gabriel A. Ramos Rivera
801-24-0582
Lab-2: Numeros Aleatorios
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    // Despliegar proposito.
    cout << "Este programa ordena 3 números aleatorios de mayor a menor.\n\n";

    // Inicializar generador de num aleatorios.
    srand(time(0));

    // Inicializar variables de numeros aleatorios.
    int numeroAleatorio_1 = rand () % (100 - 0 + 1) + 0,
        numeroAleatorio_2 = rand () % (100 - 0 + 1) + 0,
        numeroAleatorio_3 = rand () % (100 - 0 + 1) + 0;
    
    // Despliegar numeros aleatorios generados.
    cout << "Los números generados son: " << numeroAleatorio_1 << ", " << numeroAleatorio_2 << " y " << numeroAleatorio_3 << ".\n";


    int big, med, small;

    //
    cout << "En orden descendiente son: ";

    // Reorganiza los numeros en orden descendiente.
    if (numeroAleatorio_1 >= numeroAleatorio_2 && numeroAleatorio_1 >= numeroAleatorio_3)
        big = numeroAleatorio_1;
    else if ()

    cout << ".\n"; 

    return 0;
}