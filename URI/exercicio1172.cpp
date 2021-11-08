#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vet [10];

    for (int i = 0; i < 10; i++){
        cin >> vet [i];
    }

    // fazendo substituição numeros iguais ou menores de 0 para 1

    for (int i = 0; i < 10; i++){
        if (vet[i] <= 0){
            vet[i] = 1;
        }
    }

    for (int i = 0; i < 10; i++){
        cout << "X[" <<i << "] = " << vet[i] << endl;
    }
}