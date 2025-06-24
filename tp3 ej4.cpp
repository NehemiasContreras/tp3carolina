#include<iostream>
using namespace std;
int main() {
    const int max = 100;
    int vec[max], num;

    cout<<"Cantidad de elementos: ";
    cin>>num;

    cout<<"Ingrese "<<num<<" elementos: ";
    for (int i = 0; i < num; i++) {
        cin>>vec[i];
    }

    for (int i = 1; i <num; i++) {
        int clave = vec[i];
        int j = i-1;
        while (j >= 0 && vec[j] > clave) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = clave;
    }

    cout<<"Ordenado : "<<endl;
    for (int i = 0; i < num; i++) {
        cout<<vec[i] << " ";
    }
    return 0;
}

