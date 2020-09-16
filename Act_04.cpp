#include<iostream>
#include "personaje.h"

using namespace std;

void capturar_enteros(){
    int enteros[5];
    int suma=0;
    float promedio;


    for (size_t i = 0; i < 5; i++)
    {
        cout<<"ingrese un numero: ";
        cin>>enteros[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        cout<<enteros[i]<<" "<<endl;
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma += enteros[i];
    }

    promedio=suma/5.0;
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;

}

void mostrar_cadena(int n, char cadena[]){

    for (size_t i = 0; i < n; i++)  
    {
        cout<<cadena<<endl;
    }
    
}


int main(){
    
    char opcion;
    char cadena[20];
    int n;

    do{
        cout<<" 1) Capturar enteros"<<endl;
        cout<<" 2) Mostrar cadena n veces"<<endl;
        cout<<" 3) Agregar personaje"<<endl;
        cout<<" 0) Salir"<<endl;
        cin>>opcion;
        fflush(stdin);

        switch(opcion){
        case '1': capturar_enteros();
            break;
        case '2': cout<<"Escribe una cadena de caracteres: ";
                  cin.getline(cadena,20,'\n');
                  cout<<"Veces que quieres que se imprima la cadena: ";
                  cin>>n;
                  mostrar_cadena(n, cadena);
            break;

        case '3': capturar_personajes();
            break;


        default: "No es una opción valida";
        }

    }while(opcion!='0');

    
    system("pause");
    return 0;

}