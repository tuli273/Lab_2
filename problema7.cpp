/*Problema 14. En una malla de 2x2, realizando únicamente movimientos hacia la derecha y hacia abajo hay 6
posibles caminos para llegar de la esquina superior izquierda a la inferior derecha como se observa en la Figura 7.
 */
#include <iostream>
#include <math.h>

using namespace std;

//Prototipo de la función Factorialn
int Factorialn (int n);

//Variables globales
int factorialn=1;


int main()
{
    int n=0;
    int posibles=0 , factorial2n=0;

    cout << "Ingrese un numero n: ";cin >> n;
    if(n>=0){

        factorial2n= Factorialn(2*n);
        factorialn= Factorialn(n);

        //Formula para encontar los valores de la vertical principal del triangulo de pascal
        posibles= factorial2n/(factorialn*factorialn);

        cout << "Para la matriz de " << n << "x" << n << " hay " << posibles << " posibles caminos" << endl;
    }

    else{
        cout << "Número inválido" << endl;}

        return 0;
    }

//Implementación de la función Factorialn
int Factorialn (int n){

    int contador;

    factorialn=1;
    if (n>=0) {

        for (contador=1 ; contador<=n ; contador++)
            factorialn*=contador;
    }

    return factorialn;

}
