#include <iostream>
#include <string.h>
using namespace std;

// trabajando con punteros: 
// El & (Operador de direccion).
// El * (Operador de indireccion).

struct tr
{
    int campo1;
    int campo2;
};

int main ()
{   
    int va[10]; // a es la direccion de memoria del primer entero de ese vector de 10 enteros.
    // a es equivalente a decir &v[0]. por lo tanto, a es un puntero a la primera direccion de memoria del vector.
    // a[1] es el elemento que esta en la deiccion de memoria desplazado 1 del comienzo del vector.
    // a[4] es el elemento que esta desplazado 4 del comienzo del vector.
    int* v;
    v = new int[10];

    va[0] = 20;
    va[1] = 30;
    v[0] = va[0];
    v[1] = va[1];

    cout << va[0] << " , " << va[1] << endl;
    cout << v[0] << " , "  << v[1] << endl;

    tr r;
    tr* pr;
    r.campo1 = 1;
    r.campo2 = 2;
    pr = &r; // Al puntero resgistro, le asignamos la direccion del registro. 

    int a=10;
    int* p; // declaramos un puntero a un entero
    float x = 11.5;
    float *q = &x;

    p = &a; // Le asignamos la direccion de memora de la variable estatica (a).

    cout <<"El valor de (a) es, " << a << endl;
    cout <<"El valor de referenciacion de puntero es: " << *p << endl;

    cout <<"El valor de (x) es; " << x << endl;
    cout <<"El valor de desrefernciacion de puntero es: " << *q << endl;

    cout <<"El campo1 es: " << r.campo1 << " o " << (*pr).campo1 << " o " << pr -> campo1;
    cout <<"El campo2 es: " << r.campo2 << " o " << (*pr).campo2 << " o " << pr -> campo2;

    // A un puntero se le puede asignar una instancia en tiempo de ejecuccion.
    // Se crea una variable anonima atraves de (new).

    p = new int; // variable anonima instanciada a traves del puntero p.
    *p = 84; // La instancia del puntero p, le asignamos 84 como entero.
    cout << *p;
    delete p; // No borra el puntero, borra la instancia.

    p = new int; // Se crea otra instancia de p.
    *p = 24;
    cout << *p;

    pr = new tr(); // Se puede poner o no los parentesis.
    pr ->campo1 = 30;
    pr ->campo2 = 44;
    cout << pr->campo1 << endl;
    cout << pr->campo2 << endl;

    return 0;
}
