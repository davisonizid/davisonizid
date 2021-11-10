#include <bits/stdc++.h>

using namespace std;

int main(){

    float vet[100];
    
    for (int i = 0; i < 100; i++){
    cin >> vet [i];
    }
    
    std::cout << std::setprecision(1) << std::fixed;
    
    for (int i = 0; i < 100; i++){
        if (vet[i] <=10){
    cout << "A[" << i << "] = " << vet[i] << endl;
        }
    }
}