/*Problema 8. Escribir un programa que permita convertir un número en el sistema romano al sistema arábigo usado
actualmente. A continuación se encuentran los caracteres usados en el sistema romano y su equivalente arábigo:
M: 1000
D: 500
C: 100
L: 50
X: 10
V: 5
I: 1
Los números romanos se forman usando estos caracteres en base a dos reglas:
Si un carácter esta seguido por uno de igual o menor valor, su valor se suma al total.
Si un carácter esta seguido por uno de mayor valor, su valor se resta del total.
Ejemplo: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174.
Nota: la salida del programa debe ser:
El número ingresado fue: DCLXVI
Que corresponde a: 666.
 */

#include <iostream>
#include <string.h>
using namespace std;

int main()
{


  char numero_Romano[100];
  int numero_F[100];
  int suma = 0,i;

  for(i = 0;i < 100;i++)   // guarda el valor numerico
    numero_F[i] = 0;

  cout<<"Ingrese el numero en romano: ";cin>>numero_Romano;

  for (i = 0;i < strlen(numero_Romano);i++) //Ciclo que recorre el arreglo numero_A[] hasta que i sea menor que su longitud
  {
    switch(numero_Romano[i])               /*La estructura switch ingrese con el elemento que hay en numero_R[i] y lleva su valor
                                        correspondiente en sistema arabigo al arreglo numero_A en la posicio [i]*/
    {
      case 'I' :
        numero_F[i] = 1;
        break;

      case 'V' :
        numero_F[i] = 5;
        break;

      case 'X' :
        numero_F[i] = 10;
        break;

      case 'L' :
        numero_F[i] = 50;
        break;

      case 'C' :
        numero_F[i] = 100;
        break;

      case 'D' :
        numero_F[i] = 500;
        break;

      case 'M' :
        numero_F[i] = 1000;
        break;
      default:                                      /*si se ingresa algo diferente a letras mayusculas o diferente a las letras ya
                                                      establecidas,el programa dira que lo que ingreso no es un numero romano*/
      {
       cout<<"El numero no es Romano\n";

        break;
      }
    }
  }

  for(i = 0;i < strlen(numero_Romano);i++)       //Este for se encarga de hacer la suma correspondiente a dicho numero ingresado
  {
    if(numero_F[i] < numero_F[i+1])
      suma -= numero_F[i];
    else
      suma += numero_F[i];
  }


  cout<<"El numero ingresado fue: "<<numero_Romano<<endl;
  cout<<"Que corresponde a: "<<suma<<endl;
  return (0);
}
