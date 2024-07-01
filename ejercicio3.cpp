#include<iostream>
#include<cmath>
using namespace std;
void catetos(float, float);
int main(){
    float co,ca;
    cout<<"ingrese la medida del cateto opuesto: ";cin>>co;
    cout<<"ingrese la medida del cateto adiacente: ";cin>>ca;
    catetos(co , ca);
}
void catetos(float a,float b){
    float h,r;
     h=pow(a, 2) + pow(b, 2);
    r=sqrt(h); 
    cout<<"el resultado es: "<<r<<endl;
}