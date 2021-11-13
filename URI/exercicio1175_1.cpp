#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vit;
    int aux;

    for (int i = 0; i < 20; i++)
    {
        cin >> aux;
        vit.push_back(aux);
    }

    reverse(vit.begin(), vit.end());
    
    for(int i = 0; i < vit.size(); i++)
    {
    cout << "N[" << i << "] = " << vit.at(i)  << endl;
    }
}