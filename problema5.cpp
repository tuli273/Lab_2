/*Problema 10. Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los números
en cada columna, cada fila y cada diagonal principal tienen como resultado la misma constante. Escriba un programa
que permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique si la matriz es un cuadrado
mágico.
 */
#include <iostream>

using namespace std;

int main()
{
int n=0 , sumadiagonal=0 , sumasfilas=0, sumascolumnas=0 ;
bool Cuadrado =false;

cout <<"Ingrese valores de las filas y las columnas:";
cin >> n;

int matriz [n][n] , sumaf[n] , sumac[n]  ;

//Asignale valores a las posiciones de la matriz
for(int i=0 ; i<n ; i++){                                           //Filas
    for(int j=0 ; j<n ; j++){                                       //Columnas
        cout << "Ingrese el valor de la matriz[" << i << "]" << "[" << j << "]: ";
        cin >> matriz [i][j];
    }
}

cout << endl << "La matriz es: " << endl;

//Imprimir la matriz
for (int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++)
        cout << " | " << matriz [i][j];

    cout << " |" << endl;
}



//Suma filas
for (int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        sumasfilas+=matriz[i][j];
    }

    sumaf[i]=sumasfilas;
    sumasfilas=0;
}



//Suma columnas
for (int j=0 ; j<n ; j++){
    for(int i=0 ; i<n ; i++){
        sumascolumnas+=matriz[i][j];

    }

    sumac[j]=sumascolumnas;
    sumascolumnas=0;
}



//Suma diagonal
for(int i=0 , j=0 ; j<n ;j++ , i++){
   sumadiagonal+= matriz[i][j];
}



//Compara la suma de las filas con la suma de las columnas y la suma de la diagonal

for (int i=0; i<n ; i++){

    if ((*(sumaf+i) == *(sumac+i)) && sumadiagonal == *(sumaf+i))
        Cuadrado=true;

    else
        Cuadrado=false;}

if(Cuadrado==true)

    cout << endl << " SI,si es un cuadrado magico  " << endl;

else
     cout << endl << "     NO,no es un cuadrado magico   " << endl;

return 0;
}
