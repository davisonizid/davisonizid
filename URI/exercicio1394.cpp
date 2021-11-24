/* Palíndromos são palavras ou frases que podem ser lidas de trás para frente ou de frente para trás e, independente da direção, mantém o que está escrito.
Exemplo: a palavra “arara” é palíndromo, pois, quando invertida, ela ficará: “arara”.
Entrada: A entrada consiste que o usuário digite uma palavra (palavrapalavra) sem qualquer tipo de caractere especial, espaços ou letras maiúsculas.
Saída: A saída consiste em uma linha que possui o resultado da verificação do seu programa, mostrando a frase “eh palindromo” para casos positivos e “nao eh palindromo” para casos negativos.*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string palavra;
    cin >> palavra;
    
    string palavra1 = palavra;
    reverse(palavra1.begin(), palavra1.end());
    
    if (palavra1 == palavra){
        cout << "eh palindromo" <<endl;
        }else {
        cout << "não eh palindrome" <<endl;    
        }
}