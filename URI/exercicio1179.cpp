#include <bits/stdc++.h>

using namespace std;

int main()
{

    int par[5], j, impar[5], i, P = 0, I = 0, x, a;


    for (i = 0; i < 15; i++) 
        {
            cin >> x;
                if (x % 2 == 0) 
                {
                par[P] = x;
                P++;
                    if (P == 5) 
                    {
                        for (j = 0; j < 5; j++)
                        {
                        cout << "par[" << j <<"] = " << par[j] << endl;
                        }
                P = 0;
                    }
                }
                else 
                {
                impar[I] = x;
                I++;
                if (I == 5) 
                    {
                        for (j = 0; j < 5; j++) 
                        {
                        cout << "impar[" << j <<"] = " << impar[j] << endl;
                        }
                    I = 0;
                    }
                    
                }
        }    
        for (j = 0; j < I; j++)
            {
            cout << "impar[" << j <<"] = " << impar[j] << endl;
            }
        for (j = 0; j < P; j++) 
            {
            cout << "par[" << j <<"] = " << par[j] << endl;
            }
}