/*Problema 16. Las permutaciones lexicográficas son permutaciones ordenadas numérica o alfabéticamente, por
ejemplo las permutaciones lexicográficas de 0,1 y 2 son: 012, 021, 102, 120, 201, 210. Escribir un programa que
reciba un número n y halle la enésima permutación lexicográfica de los números entre 0 y 9.
Ejemplo: para n= 1000000, la permutación lexicográfica es 2783915460.
Nota: la salida del programa debe ser:
La permutacion numero 1000000 es: 2783915460.
 */

#include <iostream>
#include <algorithm> //Libreria para utilizar next permutation
using namespace std;

int main()
{
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int  n = 0;
    cout << "Ingrese el numero de la permutacion: ";cin >> n;

    for(int i=1;i<n;i++){
        next_permutation(array,array+10); //Halla la siguiente permutacion del arreglo


    }



    cout<<"La permutacion numero: "<<n<<" es ";

    cout << array[0] << array[1] << array[2] << array[3] << array[4] << array[5] << array[6] << array[7] << array[8] << array[9]  << endl;

    return 0;
}
