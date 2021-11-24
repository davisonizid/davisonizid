/*Você trabalha no comitê responsável pelo vestibular em uma faculdade e deve escrever um programa que, dado o gabarito e as respostas de um dos candidatos, determina o número de acertos daquele candidato.
Entrada: A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão. A primeira linha da entrada contém um único inteiro NN, indicando o número de questões da prova. A segunda linha da entrada contém uma cadeia de NN caracteres, indicando o gabarito da prova. A terceira linha da entrada contém outra cadeia de NN caracteres, indicando as opções marcadas pelo candidato. Ambas as cadeias contêm apenas os caracteres 'A', 'B', 'C', 'D' e 'E' (sempre em letra maiúscula).
Saída: Seu programa deve imprimir na saída padrão uma única linha contendo um único inteiro, indicando o número de acertos do candidato.*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int qtdquestoes;
    cin >> qtdquestoes;
    string gabarito , respostaAluno;
    cin >> gabarito;
    cin >> respostaAluno;
    
    int qtdacertos = 0;
    for (int i = 0; i < gabarito.size(); i++){
        if(gabarito.at(i)==respostaAluno.at(i)){
        qtdacertos++;}
    }
    cout << qtdacertos << endl;
}