#include<iostream>

using namespace std;

int main(){
    char nombre[100];
    unsigned int edad;

    cout<<"Hola mundo"<<endl;
    cout<<"Ingrese su nombre completo: ";
    cin.getline(nombre,sizeof(nombre),'\n');
    cout<<"Hola "<<nombre<<endl;
    cout<<"ingrese su edad: ";
    cin>>edad;
    cout<<"Vas a cumpir "<<edad+1;

    return 0;
}