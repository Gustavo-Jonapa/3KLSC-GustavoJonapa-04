// 3KLSC-GustavoJonapa-04.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <cstdlib>

#define maxf 3
#define maxc 5

using namespace std;

int main(int argc, char* argv[])
{
    float a[maxf][maxc];
    int f, c;
    int resultado = maxf * maxc;

    cout << "Los valores a ingresar son:";
    cout << resultado << endl;
    //leer el array
    for (f = 0; f < maxf; f++)
    {
        for (c = 0; c < maxc; c++) {

            cout << "Ingrese numero :" << endl;
            cin >> a[f][c];
        }
    }

    //escribir el array
    for (f = 0; f < maxf; f++)
    {
        for (c = 0; c < maxc; c++) {
            cout << a[f][c];
            cout << endl;
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
