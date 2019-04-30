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
public:
	//Funcionario::Funcionario (string n, float s);
	void setNome (string s);
	string getNome ();
	void setSalario (float salario);
	float getSalario ();

};

void Funcionario::setNome (string s) {
    nome = s;
}
Funcionario::getNome() {
    return nome;    
}

void Funcionario::setSalario (float s_) {
	salario = s_;
}

Funcionario::getSalario () {
	return salario;
}


class Empresa //classe que representa a empresa
{
public:
	string seu_nome;
	string cnpj;
	vector<Funcionario> empregados; /* a empresa tem que ter uma lista de funcionários
	então criei um vector do tipo <Funcionario> para guardar nele.
	*/
	Empresa() { //incicializei o contrutor, assim inicializando o vector empregados
		vector<Funcionario> empregados; // mas o compilador diz que está errado e não estou conseguindo sair disso.
	}
	void adicionarFuncionario(Funcionario f) { // aqui a função para adicionar, mas o "empregados" não está funcionando
	
		empregados.push_back(f);
	}
	//~Empresa();	
};
class Gerenciar
{
	string inicial; //classe que serve para gerenciar as empresas.
	vector<Empresa> lista_empresa;
	Gerenciar () {
		vector <Empresa> lista_empresa;
	}
	void adicionarEmpresa (Empresa e) {
		lista_empresa.push_back(e);
	}
};
void print_nome_salario (Funcionario n_func) {
	cout << "Nome do Funcionario: " << n_func.nome << endl;
	cout << "Nome do Funcionario: " << n_func.salario << endl;
};

//fazer alterações na main, pois esse código abaixo está com as funções antigas, porque os métodos agora são privados
//no metodo antigo, todos os objetos eram públicos.

int main(int argc, char const *argv[])
{
	vector<Empresa> lista_empresa;
	cout << "Testando o funcionamento\n";
	//criando funcionário --- teste ---
	Funcionario f1;
	f1.setNome = "Marlus Marcos";
	f1.setSalario = 4.855;
	cout << "nome do func: " << f1.getNome <<"\nSalaŕio do func: " << f1.getSalario << endl;
	cout << "======================\n";

	//criando empresa
	cout << "Testando Empresa\n";
	Empresa microsoft;
	microsoft.seu_nome = "Microsoft";
	microsoft.cnpj = "132545";
	microsoft.adicionarFuncionario(f1);
	cout << "seu nome: " << microsoft.seu_nome<< "\n" << "cnpj: " << microsoft.cnpj << endl;
	lista_empresa.push_back (microsoft);


	int i=1;
	while (i == 1) {
		Empresa a;
		Funcionario b;
		string _nome;
		float sal;
		cout << "Digite o nome do func e seu salario\n";
		cin >> _nome;
		cin >> sal;
		b.nome = _nome;
		b.salario = sal;
		print_nome_salario(b);
		a.adicionarFuncionario(b);	
		cout << "funcionário adicionado a empresa: " << a.seu_nome << endl;
		cout << "Digite 1 para continuar ou 0 para sair\n";
		cin >> i;
	}

	return 0;
}
