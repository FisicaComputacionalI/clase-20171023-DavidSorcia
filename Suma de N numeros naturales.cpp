//Programa que suma los numeros naturales
//Autor: David Sorcia Hernandez
//Fecha: Octubre 23, 2017
#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int N=0;
    int count=1;
    cout<<"Dame un numero entero"<<endl;
    cin>>N;
    for(int i=0; i<=N; i++){
        sum=sum+i;
        cout<<"La suma de los N numeros naturales es:"<<sum<<endl;
    }
    return 0;
}