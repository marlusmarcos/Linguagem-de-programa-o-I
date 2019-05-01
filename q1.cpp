
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
	void setSalario (float s_);
	float getSalario ();
	void print_nome_salario ();

};

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
	 // mas o compilador diz que está errado e não estou conseguindo sair disso.
	
    void setSeu_nome (string n_empresa); //setSeu_nome representa o nome da classe empresa
	string getSeu_nome();
	void setCnpj(string n_cnpj);
	string getCnpj ();

	void adicionarFuncionario(Funcionario *f); // aqui a função para adicionar, mas o "empregados" não está funcionando
	void print_nome_cnpj ();
	//~Empresa();	
};
    Empresa::Empresa () {
	    vector<Funcionario> empregados;
	}
    void Empresa::adicionarFuncionario(Funcionario *f) { // aqui a função para adicionar, mas o "empregados" não está funcionando
	
		empregados.push_back(*f);
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
    void Empresa::print_nome_cnpj () {
		cout << "O nome da empres é: " << this->seu_nome << endl;
		cout << "O CNPJ da empresa é" << this->cnpj << endl;
	}


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
void Funcionario::print_nome_salario () {
	cout << "Nome do Funcionario: " << this->nome << endl;
	cout << "Salario do Funcionario: " << this->salario << endl;
};

//fazer alterações na main, pois esse código abaixo está com as funções antigas, porque os métodos agora são privados
//no metodo antigo, todos os objetos eram públicos.

int main(int argc, char const *argv[])
{
	vector<Empresa> lista_empresa;
	cout << "Testando o funcionamento\n";
	//criando funcionário --- teste ---
	Funcionario *f1 = new Funcionario;
	f1->setNome("Marlus arcos");
	f1->setSalario(4.855);
	f1 -> print_nome_salario();
	cout << "======================\n";

	//criando empresa
	cout << "Testando Empresa\n";
	Empresa *microsoft = new Empresa;
	microsoft->setSeu_nome("Microsoft");
	microsoft->setCnpj("132545");
	microsoft->adicionarFuncionario(f1);
	microsoft->print_nome_cnpj();
	lista_empresa.push_back (*microsoft);

    Empresa *a = new Empresa;
	a->setSeu_nome ("Professores efetivos IFRN");
	int i=1;
	while (i == 1) {
		Funcionario *b = new Funcionario;
		string _nome;
		float sal;
		cout << "Digite o nome do func e seu salario\n";
		cin >> _nome;
		cin >> sal;
		b->setNome (_nome);
		b->setSalario (sal);
		b->print_nome_salario();
		a->adicionarFuncionario(b);	
		cout << "funcionário adicionado a empresa: " << a->getSeu_nome() << endl;
		cout << "Digite 1 para continuar ou 0 para sair\n";
		cin >> i;
	}
/**/
	return 0;
}
