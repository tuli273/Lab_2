/*Problema 12. Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
imprima la matriz rotada 90, 180 y 270 grados.
 */

#include <iostream>

using namespace std;

//Declaracion de las funciones que van a rotar ma matriz original.

void cientochenta(int *b, int pos);
void noventa(int *a, int pos);
void dossetenta(int *c, int pos);


//Declaracion de la funcion que va hacer llamada constantemente para imprimir cada matriz
void mostrar(int a[][5]);



int main()
{

    int original[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    cout << "Matriz original" << endl;
    mostrar(original);//Se llama la funcion mostrar que es la encargada de imprimir cada matriz

    int (*px)[5]=original;//apuntador declarado para apuntar a un arreglo de a paquetes de a 5, en este caso la matriz original
    for(int fila = 0; fila < 5; fila++)//ciclo que recorre las filas
        noventa(*(px + fila), 4 - fila);//Se llama la funcion noventa que recibe una direccion de memoria de cada fila de la matriz orgiinal y un entero


    return 0;
}

void mostrar(int a[][5]){//implementacion de la funcion que imprime cada matriz
    for(int fila = 0; fila <5 ; fila++)//ciclo que recorre las filas
    {
        for(int colum = 0; colum < 5; colum++)//ciclo que recorre las columnas
        {
            if(*(*(a + fila) + colum) < 10)//condicional para imprimir los numeros de un solo digito con espacios y que la matriz se vea presentable
                cout<<" "<<*(*(a + fila) + colum)<<" ";
            else//de lo contrario si el numero ya es de dos digitos no se imprime con espacio
                cout<<*(*(a + fila) + colum)<<" ";
        }
        cout<<endl;
    }
}
void noventa(int *a, int pos){//implementacion de la funcion noventa que recibe un puntero y un entero
   int nov[5][5]; //declaracion de la matriz de noventa grados
   for(int i = 0; i < 5; i++) //ciclo que recorre las filas y las cambia a un columna en la ultima posicion
       nov[i][pos] = *(a + i);//Se va llenando la matriz de 90 para que la fila 1 de la matriz original la ponga en la ultima columna y asi sucesvamente
   if (pos==0){//condicional que indica que ya se lleno la matriz
       cout<<endl;
       cout<<"Matriz rotada a 90 grados: "<<endl;
       mostrar(nov);//se llama la funcion mostrar para que muestre la matriz de 90
       cout<<endl;
       int (*py)[5]= nov;//apuntador que apunta a la matriz de 90 grados
       for(int fila = 0; fila < 5; fila++)//ciclo que recorre las fila en la matriz de 90
        cientochenta(*(py + fila), 4 - fila);//se llama la funcion cientoochenta que recibe una direcciond de memoria y un entero
   }
}

void cientochenta(int *b, int pos){ //implementacion de la funcion que recibe la direccion de memoria de las filas de la matriz de 90 y un entero
    int c_ochenta[5][5];//declaracion de la matriz de 180
    for(int j =0 ; j < 5; j++)//ciclo que recorre las filas y las cambia a una columna en la ultima pisicion
        c_ochenta[j][pos]= *( b + j);//Se va llenando la matriz de 180 para que la fila 1 de la matriz de 90 la ponga en la ultima columna y asi sucesvamente
    if(pos==0){//condicional que indica que ya se lleno la matriz
    cout<<"Matriz rotada a 180 grados: "<<endl;
    mostrar(c_ochenta);//se llama la funcion mostrar para que muestre la matriz de 180
    cout<<endl;
    int (*py)[5]= c_ochenta;//apuntador a la matriz de 180 grados
    for(int fila = 0; fila < 5; fila++)//ciclo que recorre las fila en la matriz de 180
        dossetenta(*(py + fila), 4 - fila);//se llama la funcion dossetenta que recibe una direcciond de memoria y un entero
    }
}


void dossetenta(int *c, int pos){//implementacion de la funcion que recibe la direccion de memoria de las filas de la matriz de 90 y un entero
    int dossetenta[5][5];//declaracion de la matriz de 270
    for(int j =0 ; j < 5; j++)//ciclo que recorre las filas y las cambia a una columna en la ultima pisicion
        dossetenta[j][pos]= *( c + j);//Se va llenando la matriz de 270 para que la fila 1 de la matriz de 180 la ponga en la ultima columna y asi sucesvamente
    if(pos==0){//condicional que indica que ya se lleno la matriz
    cout<<"Matriz rotada a 270 grados: "<<endl;
    mostrar(dossetenta);//se llama la funcion mostrar para que muestre la matriz de 270
    }
}
