#include<iostream>


using namespace std;

void capturar_enteros(){
    int enteros[5];
    float promedio;
    int suma=0;
    for (size_t i = 0; i < 5; i++)
    {
        cout<<"\nIngrese un numero: ";
        cin>>enteros[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        
        cout<<enteros[i]<<"\n";
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma += enteros[i];
    }

    promedio = suma/5.0;
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"\n";
}

void cadena_enteros(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        cout<<cadena<<endl;
    }
    cout<<"\n";

}
int main(){
    char opcion;
    char cadena[100];
    int n;

    do
    {
        fflush(stdin);
        cout<<" 1) Capturar enteros"<<endl;
        cout<<" 2) Mostrar cadena n veces"<<endl;
        cout<<" 3) Agregar personaje"<<endl;
        cout<<" 0) Salir"<<endl;
        cin>>opcion;

        fflush(stdin);
        switch (opcion)
        {
        case '1':
             capturar_enteros();

            break;
        case '2':
            cout<<"Escribe una cadena de 20 caracteres: ";
            cin.getline(cadena,100,'\n');
            cout<<"numero de veces que quieres se imprima la cadena: ";
            cin>>n;
            cadena_enteros(n, cadena);
            break;

        case '3':
            break;
        
        default:
            break;
        }


    } while (opcion!='0');
    

    return 0;
}