#include "funcionario.h"
using namespace std;
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