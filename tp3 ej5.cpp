#include <iostream>
using namespace std;
int main() {
    const int max = 100;
    int vec[max], num, valor, encontrado = 0;

    cout<<"Cantidad de elementos: ";
    cin>>num;

    cout << "Ingrese "<<num<<" elementos: ";
    for (int i = 0; i < num; i++) {
        cin >> vec[i];
    }

    cout<<"Ingrese el valor a buscar: ";
    cin>>valor;

    for (int i = 0; i < num; i++) {
        if (vec[i] == valor) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        cout<<"El valor si esta en el vector.";
    } else {
        cout<<"El valor no esta en el vector.";
    }

    return 0;
}

