#ifndef _FUNCIONARIO 
#define _FUNCIONARIO
using namespace std;    
#include <iostream>
#include <vector>
#include <string>
class Funcionario //classe que representa um funciuonario
{
private:
	string nome;
	float salario;
	string data_contrato;
	string cpf;
public:
	//Funcionario Funcionario (string n, float s);
	void setNome (string s);
	string getNome ();
	void setSalario (float s_);
	float getSalario ();
	void print_nome_salario ();
	void setCpf (string c);
	string getCpf ();
};

#endif