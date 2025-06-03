#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Cantidad de elementos: ";
    cin>>n;
    vector<int> v(n);

    cout<<"Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    cout << "Vector Ordenado (burbuja): "<<endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}

