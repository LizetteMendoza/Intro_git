#include<iostream>

using namespace std;

int main(){
    char nombre[100];

    cout<<"Hola mundo"<<endl;
    cout<<"Ingrese su nombre completo: ";
    cin.getline(nombre,sizeof(nombre),'\n');
    cout<<"Hola "<<nombre<<endl;

    return 0;
}