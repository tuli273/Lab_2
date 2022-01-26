/*Problema 2. Haga una función que compare 2 cadenas de caracteres y retorno un valor lógico verdadero si son
iguales y falso en caso contrario, no olvide también tener en cuenta la longitud de las cadenas. Escriba un programa
de prueba.
 */
#include <iostream>
#include <string.h>
using namespace std;

//Prototipo de  funcion
bool comparar(char cadena1[],char cadena2[],int tam1,int tam2);


//Funcion prueba
int main()
{
    char cadena1[]="voleibol",cadena2[]="voleybal";
    comparar(cadena1,cadena2,8,8);                    //Llamamos a la funcion para probarla

    return 0;
}

//Cuerpo de la funcion
bool comparar(char cadena1[],char cadena2[],int tam1,int tam2){
       bool bandera=false;
       int contador=0;

       if(tam1!=tam2){                                 //determina si los tamaños de las cadenas son diferentes
           bandera=true;
           cout<<"Las cadenas no son iguales"<<endl;
       }
       while(bandera==false && contador<tam1){         //Ciclo que compara si las cadenas no son iguales
           for(int i=0;i<=tam1;i++){
               if(cadena1[i]!=cadena2[i]){
                   bandera=true;
                   cout<<"Las cadenas "<<"''"<<cadena1<<"''"<<" y "<<"''"<<cadena2<<"''"<<" no son iguales!"<<endl;
                   break;
               }
               contador++;
           }
       }
       if(bandera==false){                            //Determia que las cadenas son iguales
           cout<<"Las cadenas "<<"''"<<cadena1<<"''"<<" y "<<"''"<<cadena2<<"''"<<" SI son iguales!"<<endl;
       }


    return bandera;         //retorna un valor booleano
}
