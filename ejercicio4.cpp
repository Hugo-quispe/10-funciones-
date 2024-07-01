#include<iostream>
#include<cmath>
using namespace std;
void calcularraices(float, float, float);
int main(){
    float a,b,c;
    cout<<"ingrese el valor de a: ";cin>>a;
    cout<<"ingrese el valor de b: ";cin>>b;
    cout<<"ingrese el valor de c: ";cin>>c;
    calcularraices(a,b,c);
}
void calcularraices(float a, float b, float c){
    float d,r,x1,x2;
    d=(pow(b, 2) + (4*(a*c)));
    r=sqrt(d);
    x1=((-1)*(b)+r)/(2*a);
    x2=((-1)*(b)-r)/(2*a);
    cout<<"el primer resultado es: "<<x1<<endl;
    cout<<"el segundo resultado es: "<<x2<<endl;
}