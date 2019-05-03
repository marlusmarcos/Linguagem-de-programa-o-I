#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Funcionario //classe que representa um funciuonario
{
private:
	string nome;
	float salario;
	string data_contrato;
	string cpf;
public:
	//Funcionario::Funcionario (string n, float s);
	void setNome (string s);
	string getNome ();
	void setSalario (float s_);
	float getSalario ();
	void print_nome_salario (Funcionario *f2);
	void setCpf (string c);
	string getCpf ();
};

void Funcionario::setCpf (string c) {
	cpf = c;
}

string Funcionario::getCpf () {
	return cpf;
}

void Funcionario::setNome (string s) {
    nome = s;
}
string Funcionario::getNome() {
    return nome;    
}

void Funcionario::setSalario (float s_) {
	salario = s_;
}

float Funcionario::getSalario () {
	return salario;
}


class Empresa //classe que representa a empresa
{
private:
	string seu_nome;
	string cnpj;
	vector<Funcionario> empregados; /* a empresa tem que ter uma lista de funcionários
	então criei um vector do tipo <Funcionario> para guardar nele.
	*/
public:
	Empresa(); //incicializei o contrutor, assim inicializando o vector empregados
	 // .
	
    void setSeu_nome (string n_empresa); //setSeu_nome representa o nome da classe empresa
	string getSeu_nome();
	void setCnpj(string n_cnpj);
	string getCnpj ();
	int getsize ();

	void adicionarFuncionario(Funcionario *f); // aqui a função para adicionar, mas o "empregados" não está funcionando
	//void print_nome_cnpj ();
	//~Empresa();	
	
	string get_func (Funcionario *f);
};
    Empresa::Empresa () {
	    vector<Funcionario> empregados;
	}
    void Empresa::adicionarFuncionario(Funcionario *f) { // aqui a função para adicionar, mas o "empregados" não está funcionando
	
		empregados.push_back(*f);
	}
	
	int Empresa::getsize () {
		return empregados.size();
	}
	
	string Empresa::get_func(Funcionario *f) {
		cout << "Nome: " << f->getNome()<<endl;
		cout << "Salário" << f->getSalario()<<endl;
		
	}
	
	void Empresa::setSeu_nome (string n_empresa) {
		seu_nome = n_empresa;
	}
	string Empresa::getSeu_nome () {
		return seu_nome;
	}
	void Empresa::setCnpj(string n_cnpj) {
		cnpj = n_cnpj;

	}
	string Empresa::getCnpj () {
		return cnpj;
	};
	
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
	int opc; // variálvel para opção.
	float salario_main;
	string n_main;
	string ne_main;
	string cnpj_main;
	string cpf_main;
	while (i != 0) {
		cout << "Digite:\n1 para criar uma empresa.\n" ;
		cout << "2 para criar um funcionario.\n"; 
		cout << "3 para listar as empresas existentes.\n";  
		cout << "4 para listar as funcionários existentes de uma empresa.\n";  
		cout << "0 para sair do programa\n";
		int controle;
		cin >> controle;
		if (controle == 0) {
			break;
		}
		Funcionario *f1 = new Funcionario;
		Empresa *microsoft = new Empresa;
		switch (controle) {
			case 1:
			cout << "Digite o nome da empresa\n";
			cin >> ne_main;
			cout << "Digite seu cnpj\n";
			cin >> cnpj_main;
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
					microsoft->adicionarFuncionario(f1);
					cout << "O funcionário " << f1->getNome() << " foi adicionado a empresa " << microsoft->getSeu_nome() << " com sucesso!\n";
					cout << "Digite 1 para adicionar um novo funcionario ou 0 para voltar ao menu\n";
					cin >> add_func;
				}
			}
			break;
			
			case 2:
				if (lista_empresa.size() == 0) {
					cout << "\nNenhuma empresa foi criada até o momento\n";
					break;
				}
				cout << "Deseja adicionar um funcionário a qual empresa?\n";
				cout << "**********************************************";
				cout << "\n******Listando empresas criadas******\n";
				for (int k=0; k <lista_empresa.size(); ++k) {
					cout << k+1 << "ª empresa: " << lista_empresa[k].getSeu_nome() <<"\n";
				}
				cin >> opc;
				opc --;
				cout << "\nAdicionando funcionário a empresa: " << lista_empresa[opc].getSeu_nome() << "\n";
				cout << "Digite o nome do Funcionario\n";
				cin >> n_main;
				cout << "Digite o salário do funcionario\n";
				cin >> salario_main;
				f1->setNome(n_main);
				f1->setSalario(salario_main);
				lista_empresa[opc].adicionarFuncionario(f1);
				break;
			case 3: 
			//int cont = 0;
			cout << "Listando empresas criadas\n";
			for (int k=0; k <lista_empresa.size(); ++k) {
				//cont++;
				cout << k+1 << "ª empresa: " << lista_empresa[k].getSeu_nome() <<"\n\n";
			}
			
			break; 
			case 4:
				cout << "Escoha uma dessas empresas criadas: \n\n";
				cout << "Listando empresas criadas\n";
				for (int k=0; k <lista_empresa.size(); ++k) {
					cout << k+1 << "ª empresa: " << lista_empresa[k].getSeu_nome() <<"\n\n";
				}
				cin >> opc;
				opc--;
				for (i=0; i < lista_empresa[opc].getsize(); ++i){
				
					lista_empresa[opc].empregados[i].get_func(f1);
			}
		}//fim do switch

	}//fim do while

	
/*
*/
	return 0;
}//fim da main
