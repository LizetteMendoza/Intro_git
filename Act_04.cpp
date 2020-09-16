#include<iostream>

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



int main(){
    
    char opcion;

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
        case '2': 
            break;

        case '3': 
            break;

        default: "No es una opción valida";
        }

    }while(opcion!='0');

    

    return 0;

}