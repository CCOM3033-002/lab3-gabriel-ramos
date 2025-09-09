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

    // Despliegar antes para no repetirse en cada bloque.
    cout << "En orden descendiente son: ";

    // Reorganiza los numeros en orden descendiente.
    // 1 2 3
    if (numeroAleatorio_1 >= numeroAleatorio_2 && numeroAleatorio_2 >= numeroAleatorio_3)
        cout << numeroAleatorio_1 << " >= " << numeroAleatorio_2 << " >= " << numeroAleatorio_3;
    // 1 3 2
    else if (numeroAleatorio_1 >= numeroAleatorio_3 && numeroAleatorio_3 >= numeroAleatorio_2)
        cout << numeroAleatorio_1 << " >= " << numeroAleatorio_3 << " >= " << numeroAleatorio_2;
    // 2 1 3
    else if (numeroAleatorio_2 >= numeroAleatorio_1 && numeroAleatorio_1 >= numeroAleatorio_3)
        cout << numeroAleatorio_2 << " >= " << numeroAleatorio_1 << " >= " << numeroAleatorio_3;
    // 2 3 1
    else if (numeroAleatorio_2 >= numeroAleatorio_3 && numeroAleatorio_3 >= numeroAleatorio_1)
        cout << numeroAleatorio_2 << " >= " << numeroAleatorio_3 << " >= " << numeroAleatorio_1;
    // 3 1 2
    else if (numeroAleatorio_3 >= numeroAleatorio_1 && numeroAleatorio_1 >= numeroAleatorio_2)
        cout << numeroAleatorio_3 << " >= " << numeroAleatorio_1 << " >= " << numeroAleatorio_2;
    // 3 2 1
    else 
        cout << numeroAleatorio_3 << " >= " << numeroAleatorio_2 << " >= " << numeroAleatorio_1;

    // Despliegar despues para no repetir en cada bloque. 
    cout << ".\n"; 

    return 0;
}