// Producto Escalar Triple.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{

    float V1[3], V2[3], V3[3];
    double i, j, k, i1, j1, k1, resul[3], suma;
    int ix;

    for (ix = 0; ix < 3; ix++)
    {
        cout << "Introduce el " << ix + 1 << " valor del primer vector: " << endl;
        cin >> V1[ix];
    }
    for (ix = 0; ix < 3; ix++)
    {
        cout << "Introduce el " << ix + 1 << " valor del segundo vector: " << endl;
        cin >> V2[ix];
    }
    for (ix = 0; ix < 3; ix++)
    {
        cout << "Introduce el " << ix + 1 << " valor del tercer vector: " << endl;
        cin >> V3[ix];
    }

    i = (V2[1] * V3[2]) - (V2[2] * V3[1]);
    j = -((V2[0] * V3[2]) - (V2[2] * V3[0]));
    k = (V2[0] * V3[1]) - (V2[1] * V3[0]);

    i1 = V1[0] * i;
    j1 = V1[1] * j;
    k1 = V1[2] * k;


    suma = i1 + j1 + k1;

    cout << "El producto escalar triple es: " << suma << endl;

    return 0;

}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
