//Identificar numeros primos
//David Sorcia Hernandez
//23 de octubre de 2017

#include <iostream>
using namespace std;

int main(){
    int N=0;
    int primo=0;
    cout<<"Dame un numero"<<endl;
    cin>> N;
for(int i=2; i<=(N/2); i++)
{
    if((N%i)==0){
        primo=1;
        break;
    }
}
if(primo==0)
cout<<"Tu numero es primo"<<endl;
else cout<<"Tu numero NO es primo"<<endl;
return 0;
}