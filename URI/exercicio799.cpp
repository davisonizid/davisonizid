/* Usando a tabela ASCII mova os caracteres no valor solicitado e mostre na saida
Exemplo: a string "UberHub" movendo 6 posições a mais ficaria: "[hkxN{h".
Entrada: A primeira linha de entrada consiste na leitura de dois nomes (nome1nome1 e nome2nome2) separados por espaço. A segunda linha consiste na NN quantidade de posições a serem deslocadas. Por fim, a terceira linha consiste na entrada da palavra (palavrapalavra) a ser descodificada.
Saída: A saída consiste em uma linha contendo a frase descodificada, caso o nome dos estudantes estejam corretos. Caso contrário, mostre a mensagem "Nao eh possivel descriptografar!".*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline (cin,str);
    if ("Reluew Markinhos" != str){
        cout << "Nao eh possivel descriptografar!";
        return 0;}
    int x, ascChar;
    cin >> x;
    string user, str1;
    cin >> user;
    for (int i=0;i<user.length();i++)
    {
        ascChar = user[i]+x;
        str1.push_back(ascChar);
    }
    cout << str1;
}