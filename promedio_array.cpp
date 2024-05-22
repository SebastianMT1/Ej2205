#include<iostream>

using namespace std;

int main (){

    float notas[6];
    float promedio = 0;

    for (int i = 0; i<6; i++){

        cout<<"Inserte la nota "<<i+1<<": ";
        cin>>notas[i];
        promedio = promedio + notas[i];
    }

    cout<<"Su promedio es de "<<promedio/6;
}