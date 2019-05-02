using namespace std;
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
}
void Empresa::print_nome_cnpj () {
	cout << "O nome da empres é: " << this->seu_nome << endl;
	cout << "O CNPJ da empresa é" << this->cnpj << endl;
}
