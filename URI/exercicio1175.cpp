#include <bits/stdc++.h>

using namespace std;

int main(){

    int V[20], a;
    
    for (int i = 0; i < 20; i++){
    cin >> V[i];
    }
    
    //inverte o ultimo com primeiro, segundo com penultimo e vai
    for(int i = 0; i < 10; i++){
        a = V[i];
        V[i] = V[20 - i - 1];
        V[20 -i - 1] = a;
    }
    
    for (int i = 0; i < 20; i++){
    cout << "N[" << i << "] = " << V[i] << endl;
        }
}