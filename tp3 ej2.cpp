#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Cantidad de numeros que desea ingresar: ";
    cin>> n;

    vector<int> numeros(n);

    cout<<"Ingrese los numeros: ";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numeros[i] > numeros[j]) {
                int a = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = a;
            }
        }
    }

    cout<<"Numeros Ordenados: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<numeros[i] << " ";
    }

    return 0;
}

