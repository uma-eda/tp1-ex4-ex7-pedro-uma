# ex1.-ex.3

Para resolver os exercícios:
* criar uma nova branch
* fazer commit das alterações
* criar um novo Pull Request

## Tp1-Ex1:
Para começar crie um novo projeto no Visual Studio C++ e escreva (não faça copiar e colar) o seguinte programa (fonte: https://bit.ly/2BhHcFT):
```
	// Ciclo de Desenvolvimento de Software
	// Escrito por: 
	// Data: 

	#include <iostream>
	#include <locale>
	using namespace std;
		
	int main(){
		locale::global(locale(""));
    		cout << "Os passos para o desenvolvimento de SW seguro são:" << endl;
    		cout << "1. Análise: Definir o problema" << endl;
    		cout << "2. Desenho: Planear a solução" << endl;
    		cout << "3. Implementação: Codificar a solução" << endl;
    		cout << "4. Testar e depurar" << endl;
    		cout << "5. Manter e documentar" << endl;
    		cout << "6. Adicionar mecanismos de segurança" << endl;
    		return 0;
	}
```
## Tp1-Ex2:
O programa anterior contém uma afirmação errada. Qual é? Coloque em comentário a frase errada.

## Tp1-Ex3:
Corrija todas as afirmações adicionando no fim de cada frase: “tendo em conta a segurança.” 

## Tp1-Ex4:
Escreva um programa que apresenta no ecrã as seguintes operações aritméticas e calcula os respetivos resultados:
```
7+3 = 10
7-3 = 4
7*3 = 21
7/3 = 2
7.0/3.0 = 2.5
7%3 = 1
7+3*5 = 22
(7+3)*5 = 50
```
## Tp1-Ex5:
Escreva um programa que pede um número inteiro ao utilizador, divide por 2, calcula o resto e retorna o resultado desta forma: 
"n1 a dividir por 2 dá n2 e o resto é n3."
onde: 
n1 é o número inserido pelo utilizador, n2 é o resultado da divisão e n3 é o resto da divisão.

## Tp1-Ex6:
Escreva um programa que pede ao utilizador o raio de um círculo e calcula a sua área (PIr^2) e o volume de uma esfera com o mesmo raio (4/3)PIr^3. Defina PI como uma constante do tipo float: const float PI = 3.14;

## Tp1-Ex7:
Escreva um programa que pede ao utilizador o seu primeiro e último nome (do tipo string) e a sua idade. Depois, o programa responde com a saudação “Olá, Xxx Yyy! Você nasceu em ZZZZ”, onde Xxx e Yyy são o primeiro e o último nome do utilizador e ZZZZ o ano do seu nascimento.
