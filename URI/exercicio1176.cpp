#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, primeiro = 0, segundo = 1, prox, c;
    int j;

    cin >> j;
   
    for(int i=1; i<=j; i++, primeiro = 0, segundo = 1)
   {
       cin >> n;
       
       n=n+1;
       
       for ( c = 0 ; c < n ; c++ )
       {
          if (c <= 1) prox = c;
          else
          {
             prox = primeiro + segundo;
             primeiro = segundo;
             segundo = prox;
          }
       }
       
        cout << "Fib(" << n-1 << ") = " << prox <<endl;
   }
}