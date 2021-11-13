#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> vet;
	int X, aux;
	
	for(int i = 0; i < 10; i++)
	{
		cin >> aux;
		vet.push_back(aux);
	}
	
	
	
	int valorBusca;
	cin >> valorBusca;
	
	for(int i = 0; vet.size(); i++){
	    if(valorBusca == vet.at(i)){
	        cout << "Sim" << endl;
	        return 0;
	    }
	}
	
	cout << "Não" << endl;    
	
}