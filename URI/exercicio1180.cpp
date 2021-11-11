#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,p, men;
     
    cin >>n;
    
    int x[n];
    
        for(a=0; a<n; a++)
        {
        cin >> x[a];
        }
    
    men = x[0];
    
        for (a=1; a<n; a++)
        {
            if(x[a]<men){
                men = x[a];
                p=a;
            }
            if(men == x[0]){
                p=0;
            }
        }
        
    
    cout << "Menor valor: " << men << endl << "Posicao: " << p << endl;
}