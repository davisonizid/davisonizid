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
	
	int Busca;
	cin >> Busca;
	int qtd = count(vet.begin(), vet.end(), Busca);
	if(qtd == 0){
	    cout << "Não" << endl;
	    }  
	else{
	    cout << "Sim" << endl;
	}
}