/*Faça um programa para ler uma string SS (sem espaços) e uma letra CC. Seu programa deve imprimir a quantidade de vezes que a letra CC aparece em SS.
Entrada: A entrada consiste de duas linhas. A primeira linha contém uma string SS. A segunda linha contém uma letra CC.
Saída: A saída consiste de uma única linha contendo um inteiro correspondente a quantidade de vezes que a letra CC aparece na string SS */
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    char letra;
    cin >> letra;
    cout << count(str.begin(), str.end(), letra) << endl;
}