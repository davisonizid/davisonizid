#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> vet;
	int qtd, aux;
	double soma, soma1 = 0;
	cin >> qtd;
	for(int i = 0; i < qtd; i++)
	{
		cin >> aux;
		vet.push_back(aux);
	}
	
	for(int i = 0; i < vet.size(); i++)
	{
		soma1 = soma1 + vet.at(i);
		
	}
	
	soma = soma1 / vet.size();
	
	cout << setprecision(2) << fixed << soma << endl;
	
}