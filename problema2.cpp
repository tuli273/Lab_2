/*
Problema 4. Haga una función que reciba un numero entero (int) y lo convierta a cadena de caracteres. Use
parámetros por referencia para retornar la cadena. Escriba un programa de prueba.
Ejemplo: si recibe un int con valor 123, la cadena que se retorne debe ser “123”.
*/
#include <iostream>
using namespace std;

void enteroAcad(int n, char cad[]){
    // Contar la cantidad de digitos de n
    int nroDig=0;
    int aux=n;
    while(aux>0){
        aux=aux/10;
        nroDig++;
    }
    cad[nroDig]='\0'; //Termina en esta posicion
    aux=n;
    int pos=nroDig-1,dig;
    while(pos>=0){
        dig=aux%10; // 5
        aux=aux/10; // 1234
        cad[pos]=dig+'0'; // Le va a sumar al digito el caracter 0
        pos--;
    }
}
int main()
{
    int a=12345;
    char cad[20];
    enteroAcad(a,cad); //cad <-- "12345"
    std::cout << "\nLa cadena que representa al numero es: "<<cad << std::endl;
}
