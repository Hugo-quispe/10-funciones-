#include<iostream>
#include<cmath>
void areacir(float);
using namespace std;
int main(){
    float a;
    cout<<"ingrese el radio del circulo: ";cin>>a;
    areacir(a);
    return 0;
}
void areacir(float r){
    float r1;
    r1=M_PI*(pow(r,2));
    cout<<"el area del circulo es: "<<r1<<endl;
}