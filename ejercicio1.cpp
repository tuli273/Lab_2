/*Ejercicio1: Con ayuda del debugger, examine la representación en memoria del arreglo array y responda las siguientes
              preguntas.
    ->Cuál es su dirección en memoria? ¿Cuántos bytes se dedican para almacenar cada elemento de array?
    ->Cuál es la dirección y el contenido en memoria del elemento array[3] ?
    ->Describa el efecto que tiene la función fun_b, sobre el arreglo array.*/

#include <iostream>
using namespace std;

//Prototipos de funciones
void fun_a(int *px, int *py);
void fun_b(int a[], int tam);

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_b(array, 10);           //la funcion fun_b que recibe un vector y el tamaño de dicho vector

    cout<<endl<<"Preguntas"<<endl;;
    cout<<"1) Cuál es su dirección en memoria? ¿Cuántos bytes se dedican para almacenar cada elemento de array?"<<endl<<
          "     -> "<<array<<endl;
    cout<<"     -> Se dedican 4 bytes               "<<endl;

    cout<<endl<<"2) Cuál es la dirección y el contenido en memoria del elemento array[3] ?"<<endl;
    cout<<"     -> Direccion de memoria: "<<&array[3]<<endl;
    cout<<"     -> EL contenido del elemento array[3] es: "<<array[3]<<endl;

    cout<<endl<<"3) Describa el efecto que tiene la función fun_b, sobre el arreglo array."<<endl;
    cout<<"     -> El efecto que tiene fun_b es invertir el arreglo."<<endl;

}

//Implementacion de las funciones

void fun_a(int *px, int *py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void fun_b(int a[], int tam)   //Funcion que invierte el arreglo
{
    int f, l;
    int *b = a;
    for (f = 0, l = tam -1; f < l; f++, l--)
    {
        fun_a(&b[f], &b[l]);
    }
}
