#ifndef EMPRESA
#define EMPRESA
#include "funcionario.h"
using namespace std;
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

	void adicionarFuncionario(Funcionario *f); // aqui a função para adicionar, mas o "empregados" não está funcionando
	void print_nome_cnpj ();
	//~Empresa();	
};


#endif