#include<iostream>
using namespace std;
int depositar(float);
int retirar(float);
float saldo;
int main(){
    int a,b;
    do{
    cout<<"cajero automatico"<<endl;
    cout<<"1 depositar"<<endl;
    cout<<"2 retirar"<<endl;
    cout<<"3 ver saldo"<<endl;
    cout<<"0 salir"<<endl;
    cout<<"ingresa la opcion que prefiera: ";cin>>a;
    switch(a){
        case 1:
            cout<<"ingresa el monto a depositar: ";cin>>b;
            depositar(b);
            cout<<"el deposito se hizo con exito"<<endl;
        break;
        case 2:
        cout<<"ingresa el monto a retirar: ";cin>>b;
        retirar(b);
        cout<<"el etiro se hizo con exito"<<endl;
        break;
        case 3:
        cout<<"el saldo actual es: "<<saldo<<endl;
        break;
        case 0:
        cout<<"gracias por usar el programa."<<endl;
        break;
        default:
        cout<<"ingrese una opcion valida."<<endl;
        break;
    }
    }while(a!=0);
    return 0;
}    
int depositar(float b){
    saldo=saldo+b;
}
int retirar(float b){
    saldo= saldo-b;
}