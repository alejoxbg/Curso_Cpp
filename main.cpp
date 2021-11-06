#include <iostream>

//espacio de nombres estandar
using namespace std;

//función main, todos los codigos deben tener una, todos los programas comienzan en esta funcion
int main(){
    cout << "Hola mundo" << endl;

    // tipos de datos (int, bool, float, double, char, etc)
    int edad = 22;
    cout << edad << endl;
    edad = 18;
    cout << edad << endl;

    //contantes no se pueden modificar
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

    //operadores aritmeticos (+-*/%)
    //operadores comparativos (== > < <= >=)
    //operadores de asignación (= += -= *= /= ++ --)
    //operadores Lógicos (&& || !)
    //otros operadores (sizeof << >>)

    int a = 2;
    int b = 3;
    int c = 1;
    c += a;
    c -= a;
    c *= b;
    c /= a;
    c++;
    c--;

    cout << sizeof(c) << endl;

    cout << sizeof(lista_edades)/ sizeof(a) << endl;




} 