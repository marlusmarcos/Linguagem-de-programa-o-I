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
	void setPorcento (float s_p);
	bool compare_cpf (string c1, string c2);
};

bool Funcionario::compare_cpf (string c1, string c2) {
	 if (c1.compare(c2) == 0) {
	 	return true;
	 }
}

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

void Funcionario::setPorcento (float s_p) {
	salario = salario+((salario*s_p)/100);
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
	
	
	Funcionario get_func(int id);
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
	
	Funcionario Empresa::get_func(int id) {
		return empregados[id];
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
	float porcentos;
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
		cout << "5 Para dar acrescimo aos funcionários de uma empresa.\n";
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
			while (controle == 1) {
					cout << "Digite o nome da empresa\n";
					getline (cin, ne_main);
					getline (cin, ne_main);
					cout << "Digite seu cnpj\n";
					getline (cin, cnpj_main);
					microsoft->setSeu_nome(ne_main);
					microsoft->setCnpj(cnpj_main);
					lista_empresa.push_back (*microsoft);
					cout << "Empresa " << microsoft->getSeu_nome() << " adicionada com sucesso!\n";
					cout << "Digite 1 para criar ua nova empresa ou 0 para voltar ao menu.\n";
					cin >> controle;	
			}
			
			break;
			
			case 2:
				if (lista_empresa.size() == 0) {
					cout << "\nNenhuma empresa foi criada até o momento\n";
					break;
				}
				controle = 1;
				while (controle == 1) {
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
					getline (cin,n_main);
					getline (cin,n_main);
					cout << "Digite o salário do funcionario\n";
					cin >> salario_main;
					cout << "Digite o CPF do funcionário:\n";
					cin >> cpf_main;
					int cont = 0;
					for (int k = 0; k < lista_empresa[opc].getsize(); ++k) {
						if (lista_empresa[opc].get_func(k).getCpf().compare(cpf_main) == 0){
							cout << "O funcionário " << n_main << " já trabalha na empresa!\n";
							cont = 1;
							
						}
						
					}
					if (cont == 0) {
					
					f1->setNome(n_main);
					f1->setSalario(salario_main);
					f1->setCpf(cpf_main);
					lista_empresa[opc].adicionarFuncionario(f1);
					cout << "Digite 1 para adicionar um novo func ou 0 para votar ao menu\n";
					cin >> controle;
					}
				}
			
				break;
			case 3: 
			//int cont = 0;
			if (lista_empresa.size() == 0) {
				cout << "Nenhuma empresa foi criada até o momento!\n";
				break;
			}
			cout << "Listando empresas criadas\n";
			for (int k=0; k <lista_empresa.size(); ++k) {
				//cont++;
				cout << k+1 << "ª empresa: " << lista_empresa[k].getSeu_nome() <<"\n\n";
			}
			
			break; 
			case 4:
				if (lista_empresa.size() == 0) {
				cout << "Nenhuma empresa foi criada até o momento!\n";
				break;
				}
				cout << "Escoha uma dessas empresas criadas: \n\n";
				cout << "Listando empresas criadas\n";
				for (int k=0; k <lista_empresa.size(); ++k) {
					cout << k+1 << "ª empresa: " << lista_empresa[k].getSeu_nome() <<"\n\n";
				}
				cin >> opc;
				opc--;
				if (lista_empresa[opc].getsize() == 0) {
					cout << "Nenhuma funcionário existente!\n";
					break;
				}
				for (i=0; i < lista_empresa[opc].getsize(); ++i){
					cout << lista_empresa[opc].get_func(i).getNome() << endl;
					cout << lista_empresa[opc].get_func(i).getSalario() << endl;
					cout << lista_empresa[opc].get_func(i).getCpf() << endl;
					cout << "\n--*--*--*--*--*--*--*--*--*--*--*--*\n";

				}
			break;
			case 5:
				if (lista_empresa.size() == 0) {
				cout << "Nenhuma empresa foi criada até o momento!\n";
				break;
				}
				cout << "*** Qual empresa voc? deseja adicionar acrescimo aos funcionários?? ***\n";
				for (int k=0; k <lista_empresa.size(); ++k) {
					cout << k+1 << "ª empresa: " << lista_empresa[k].getSeu_nome() <<"\n\n";
				}
				cin >> opc;
				opc--;
				if (lista_empresa[opc].getsize() == 0) {
					cout << "Nenhuma funcionário existente!\n";
					break;
				}
				cout << "Quantos porcentos você deseja adicionar aos funcionários?\n";
				cin >> porcentos;
				for (i=0; i < lista_empresa[opc].getsize(); ++i){
					cout <<"Nome do funcionário: " << lista_empresa[opc].get_func(i).getNome() << endl;
					cout <<"Salário anterior: " << lista_empresa[opc].get_func(i).getSalario() << endl;
					*f1 = lista_empresa[opc].get_func(i);
					f1->setPorcento(porcentos);
					cout <<"Salário atual: " << f1->getSalario() << endl;
				}
				break;

		}//fim do switch

	}//fim do while

	
/*
*/
	return 0;
}//fim da main 
