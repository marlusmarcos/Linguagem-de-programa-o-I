#include "empresa.h"
using namespace std;
int main(int argc, char const *argv[])
{
	vector<Empresa> lista_empresa;

	cout << "==== Programming for enterprise ==== \n";
	//cout << "Digite:\n 1) para criar uma empresa.\n" ;
	//cout << "Digite:\n 2) para criar um funcionario.\n";  
	//cout << "Digite:\n 1) para criar uma empresa."  
	//cout << "Digite:\n 1) para criar uma empresa."  
	//cout << "Digite:\n 1) para criar uma empresa."  
	int i = -1;
	float salario_main;
	string n_main;
	string ne_main;
	string cnpj_main;
	string cpf_main;
	while (i != 0) {
		cout << "Digite:\n 1) para criar uma empresa.\n" ;
		cout << "Digite:\n 2) para criar um funcionario.\n";  
		cout << "Digite 0 para sair do programa\n";
		int controle;
		cin >> controle;
		if (controle == 0) {
			break;
		}
		switch (controle) {
			case 1:
			cout << "Digite o nome da empresa\n";
			cin >> ne_main;
			cout << "Digite seu cnpj\n";
			cin >> cnpj_main;
			Empresa *microsoft = new Empresa;
			microsoft->setSeu_nome(ne_main);
			microsoft->setCnpj(cnpj_main);
			lista_empresa.push_back (*microsoft);
			cout << "Empresa " << microsoft->getSeu_nome() << " adicionada com sucesso!\n";
			cout << "Digite 1 para adicionar funcionários ou 0 para voltar ao menu principal\n";
			cin >> controle;
			if (controle == 1) {
				int add_func = 1;
				while (add_func == 1) {
					cout << "Digite o nome do Funcionario\n";
					cin >> n_main;
					cout << "Digite o salário do funcionario\n";
					cin >> salario_main;
					Funcionario *f1 = new Funcionario;
					f1->setNome(n_main);
					f1->setSalario(salario_main);
					cout << "O funcionário " << f1->getNome() << " foi adicionado a empresa " << microsoft->getSeu_nome() << " com sucesso!\n";
					cout << "Digite 1 para adicionar um novo funcionario ou 0 para voltar ao menu\n";
					cin >> add_func;
				}
			}
			break;
		}

	}
	int cont = 0;
	cout << "Listando empresas criadas\n";
	for (int k=0; k <lista_empresa.size(); ++k) {
		cont++;
		cout << lista_empresa[k].getSeu_nome();
	}


cout << "Existem " << cont << " empresas.\n";

cout << "==============================================\n";
cout << "Listando funcionários de uma empresa\n";

	return 0;
}