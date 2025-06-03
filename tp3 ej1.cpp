#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<string>paises(5);

    cout<<"Ingrese los nombres de 5 paises y los ordenaremos de forma alfabetica:"<<endl;
    for (int i=0; i<5; i++) {
        cin>>paises[i];
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j<5; j++) {
            if (paises[i]>paises[j]) {
                string a = paises[i];
                paises[i] = paises[j];
                paises[j] = a;
            }
        }
    }

    cout<<"Ordenados Alfabeticamente: "<<endl;
    for (int i = 0; i < 5; i++) {
        cout<<paises[i]<<endl;
    }
    return 0;
}

