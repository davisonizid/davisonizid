#include <bits/stdc++.h>

using namespace std;

int main()
{

    double X, N[100];
    cin >> X;
    N[0] = X;
    
    std::cout << std::setprecision(4) << std::fixed;
    
       for (int i = 1; i < 100; i++){
        N[i] = N[i-1] / 2;
        }

    for (int i = 0; i < 100; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
        }
}