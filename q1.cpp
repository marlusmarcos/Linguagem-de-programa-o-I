#include <iostream>
#include <vector>
#include <string>

class Funcionario //classe que representa um funciuonario
{
public:
	std::string nome;
	double salario;
	std::string data_contrato;


};

class Empresa //classe que representa a empresa
{
public:
	std::string seu_nome;
	std::string cnpj;
	std::vector<Funcionario> empregados; /* a empresa tem que ter uma lista de funcionários
	então criei um vector do tipo <Funcionario> para guardar nele.
	*/
	Empresa() { //incicializei o contrutor, assim inicializando o vector empregados
		std::vector<Funcionario> empregados; // mas o compilador diz que está errado e não estou conseguindo sair disso.
	}
	void adicionarFuncionario(Funcionario f) { // aqui a função para adicionar, mas o "empregados" não está funcionando
	
		empregados.push_back(f);
	}
	//~Empresa();	
};
/*class Gerenciar
{
	std::string inicial; //classe que serve para gerenciar as empresas.
	std::vector<Empresa> lista_empresa;

	Gerenciar () {
		std::vector <Empresa> lista_empresa;
	}
	void adicionarEmpresa (Empresa e) {
		lista_empresa.push_back(e);
	}
};*/
void print_nome_salario (Funcionario n_func) {
	std::cout << "Nome do Funcionario: " << n_func.nome << std::endl;
	std::cout << "Nome do Funcionario: " << n_func.salario << std::endl;
};

int main(int argc, char const *argv[])
{
	std::vector<Empresa> lista_empresa;
	std::cout << "Testando o funcionamento\n";
	//criando funcionário --- teste ---
	Funcionario f1;
	f1.nome = "Marlus Marcos";
	f1.salario = 4.855;
	std::cout << "nome do func: " << f1.nome <<"\nSalaŕio do func: " << f1.salario << std::endl;
	std::cout << "======================\n";

	//criando empresa
	std::cout << "Testando Empresa\n";
	Empresa microsoft;
	microsoft.seu_nome = "Microsoft";
	microsoft.cnpj = "132545";
	microsoft.adicionarFuncionario(f1);
	std::cout << "seu nome: " << microsoft.seu_nome<< "\n" << "cnpj: " << microsoft.cnpj << std::endl;
	lista_empresa.push_back (microsoft);


	int i=1;
	while (i == 1) {
		Empresa a;
		Funcionario b;
		std::string _nome;
		float sal;
		std::cout << "Digite o nome do func e seu salario\n";
		std::cin >> _nome;
		std::cin >> sal;
		b.nome = _nome;
		b.salario = sal;
		print_nome_salario(b);
		a.adicionarFuncionario(b);	
		std::cout << "funcionário adicionado a empresa: " << a.seu_nome << std::endl;
		std::cout << "Digite 1 para continuar ou 0 para sair\n";
		std::cin >> i;
	}



	return 0;
}