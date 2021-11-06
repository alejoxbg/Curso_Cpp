#include <iostream>

//espacio de nombres estandar
using namespace std;

//función main, todos los codigos deben tener una, todos los programas comienzan en esta funcion
int main(){
    cout << "Hola mundo" << endl;
    int edad = 22;
    cout << edad << endl;
    edad = 18;
    cout << edad << endl;
    const char letra = 'A';
    cout << letra << endl;
    //no se puede editar, sale error al compilar
    //letra ='B';
    cout << letra << endl;

    //listas
    int lista_edades[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << lista_edades[1] << endl;
    lista_edades[1] = 22;
    cout << lista_edades[1] << endl;
} 