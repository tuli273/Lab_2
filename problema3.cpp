/*Problema 6. Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original.
Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
Nota: la salida del programa debe ser:
Original: abc54rst.
Texto: abcrst. Numeros: 54.
 */
#include <iostream>
using namespace std;

int main(){


char Valoringresados [30]="";
char letras [30]="";
char numeros [30]="";
int a=0 , b=0;

cout << "Ingrese los caracteres: ";cin >> Valoringresados;

for (int i=0 ; i<30 ; i++){

    if ((int)*(Valoringresados+i)==0){  //Convierte lo que hay en el arreglo ingresados[] a int.
        break;}


    if (((int)*(Valoringresados+i))>=48  &&  (((int)*(Valoringresados+i))<=57)){ /*Convierte lo que hay en el arreglo ingresados[] a int*/

        *(numeros+a)=*(Valoringresados+i);	/*cambia el valor que hay en  numeros[]+j en ese momento por el valor que tenga en ese momento el elemento de ingresados[]+i*/
        a++;
    }

    else{
        *(letras+b)=*(Valoringresados+i);	//Operaciones entre punteros(arreglos)
        b++;
    }

}


    cout << "original: " << Valoringresados <<  "  letras: " << letras << "  numeros: " << numeros <<  endl;
    return 0;

}
