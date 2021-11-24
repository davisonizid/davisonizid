/*Você deve escrever um programa que será capaz de resolver operações de multiplicação e divisão. Primeiro será informado que operação seu programa deve calcular, depois será informado dois números, seu programa deve então imprimir a resposta apropriada.
Entrada: A entrada consiste de duas linhas, a primeira linha apresentará a letra 'M' caso você deva calcular a multiplicação entre os números e a letra 'D' caso a operação seja de divisão. A segunda linha conterá dois números reais.
Saída: A saída do seu programa deve conter apenas uma linha, informando a resposta apropriada para a operação realizada com uma precisão de 2 casas decimais.*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    char str[0];
    cin >> str;
    double x, y;
    cin >> x;
    cin >> y;
    std::cout << std::setprecision(2) << std::fixed;
    
    if('M' == str[0]){
        cout << x * y;}
    if('D' == str[0]){
        cout << x / y;}
}