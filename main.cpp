#include <iostream>
using namespace std;
//Calcular el cubo de un numero
int cubo(int a){
    return(a*a*a);
}
int main() {
    int a;
cout<<"ingrese un numero a tratar"<<endl;
cin>>a;
cout<<"el cubo de "<<a<<" es: "<<cubo(a);
    return 0;
}
