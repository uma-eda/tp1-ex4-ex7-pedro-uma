#include<iostream>
#include<locale>
#include<stdlib.h>
#include<time.h>
#include "funcionario.h"

using namespace std;

int main() {
	locale pt = pt.global(locale(""));
	bool sair = false;
	while (!sair) {
		
		char utilizador;
		cout << "******* Bem-Vindo *******" << endl;
		cout << "Por favor introduza c para cliente e f para o funcion�rio" << endl;
		cin >> utilizador;
		bool sair = false;
		
		if (utilizador == 'c') {
			
			char escolha_utilizador;
			cout << "******* Bem-Vindo Cliente *******" << endl;
			cout << "Indtroduza o c�digo do produto: ";
			cin >> escolha_utilizador;
			cout << endl;
			cout << "Escolheu FALTA ACABAR.................." << endl;
			cout << endl;
		}
		else if (utilizador == 'f') {
			
			system("cls");
			cout << "******* Bem-Vindo Funcion�rio *******" << endl;
			cout << "1. Limpar slots" << endl;
			cout << "2. Limpar m�quina" << endl;
			cout << "3. Adicionar produto" << endl;
			cout << "4. Alterar pre�o" << endl;
			cout << "5. Adicionar slot" << endl;
			cout << "6. Carregar moedas" << endl;
			cout << "7. Imprimir produtos" << endl;
			cout << "8. Gravar m�quina" << endl;
			cout << "9. Carregar m�quina" << endl;
			cout << "10. Remover trocos" << endl;
			cout << "0. Voltar" << endl;
			cout << "Digite a sua op��o: "<< endl;
			funcionario_opcoes();
		}
	}


	cin.sync();//manter consola aberta
	cin.get(); //manter consola aberta
	cin.ignore();

	return 0;
}