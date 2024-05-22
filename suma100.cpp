#include<iostream>

using namespace std;

int main(){

    int numeros[100];
    int suma = 0;

    for (int i = 0; i < 100; i++)
    {
        numeros[i] = i+1;
        suma = suma + numeros[i];

    }
    
    cout<<suma;

    return 0;
}