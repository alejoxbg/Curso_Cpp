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


    //entrada y salida de datos
    cout << "introduce tu edad entre 18 y 35:" << endl;
    cin >> edad;
    cout << "tu edad es: " << edad << endl;



    //condicionales
    int edad_limite = 40;
    bool resultado = edad >= 18 &&  !(edad >edad_limite);

    if (resultado){
        cout << "Puedes votar" << endl;
    }
    else if (edad >80){
        cout << "Usted está muy viejo" << endl;
    }
    else {
        cout << "No puedes votar" << endl;
    }

    //switch case
    int opcion = 0;
    cout << "ingresa un numero del 1 al 3" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "usted ingresó 1" << endl;
        break;
    case 2:
        cout << "usted ingresó 2" << endl;
        break;

    case 3:
        cout << "usted ingresó 2" << endl;
        break;    
    default:
        cout << "El numero que ingresó no es valido" << endl;
        break;
    }

} 