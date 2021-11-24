/* Faça um programa para ler uma string SS (sem espaço). Seu programa deve imprimir duas listas. A primeira com todas as vogais da string e uma segunda com todas as consoantes da string.
Entrada: A entrada consiste de uma linha contendo uma string SS.
Saída: A saída consiste de duas linhas. A primeira linha consiste da mensagem "Vogais: " seguida da string SS sem as consoantes. A segunda linha consiste da mensagem "Consoantes: " seguida da string SS sem suas vogais. Considere que apenas as letras 'a', 'e', 'i', 'o' e 'u' são vogais. Perceba nos exemplos de entrada e saída, que a ordem das letras na string SS se mantém na saída. */
#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    
    string vogais, consoantes;
    
    for (int i = 0; i <str.size(); i++){
        if(str.at(i)=='a' || str.at(i)=='e' || str.at(i)=='i' || str.at(i)=='o' || str.at(i)=='u'){
          vogais.push_back(str.at(i));}
        else{consoantes.push_back(str.at(i));}
        }
        
    cout << "Vogais: " << vogais << endl; 
    cout << "Consoantes: " << consoantes << endl;
}