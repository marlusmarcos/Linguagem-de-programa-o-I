#include <iostream>
#include <vector>
#include <string>

class Funcionario
{
public:
	std::string nome;
	double salario;

	//Funcionario();
	//~Funcionario();
	
};

class Empresa
{
public:
	std::string seu_nome;
	std::string cnpj;
	std::vector<Funcionario> empregados;  

//	Empresa();
//	~Empresa();
	
};

int main(int argc, char const *argv[])
{
	std::cout << "Testando o funcionamento\n";
	//criando funcionário
	Funcionario f1;
	f1.nome = "Marlus Marcos";
	f1.salario = 4.855;
	std::cout << "nome do func: " << f1.nome <<"\nSalaŕio do func: " << f1.salario << std::endl;
	std::cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
	//criando empresa
	Empresa e1;
	e1.seu_nome = "ifrn";
	e1.cnpj = "125452454";
	e1.empregados = f1;
	std::cout << e1.seu_nome << e1.cnpj << e1.empregados;


	return 0;
}