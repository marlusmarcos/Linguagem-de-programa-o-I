#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
//#include <ifstream>

using namespace std;


class Funcionario {
	protected:
		string nome;
		int idade;
	public:

		//Funcionario(void);
//		Funcionario(string nome, int idade);
//		~Funcionario();
		void setNome(string nome);
		string getNome();
		void setIdade(int idade);
		int getIdade();
		void adicionar(string nome, int idade);
		void listar(Funcionario *f1);
};

void Funcionario::setNome(string nome){
	this->nome=nome;
}
string Funcionario::getNome(){
	return this->nome;
}
void Funcionario::setIdade (int idade) {
	this->idade=idade;
}
int Funcionario::getIdade () {
	return this->idade;
}

void Funcionario::adicionar(string nome, int idade ) {
    this->nome=nome;
    this->idade=idade;

}
void Funcionario::listar(Funcionario *f1) {
    cout << "Funcionario " << f1->getNome() << endl;
}

////Funcionario::Funcionario(){};
//Funcionario::~Funcionario(){};

int main () {
    string nome;
    int idade;
    Funcionario *f1 = new Funcionario();
    vector<Funcionario> vector_func;
	fstream arquivo("lista.csv", ios::in); // aqui abro o arquivo em modo leitura
	string nome1;
	string idade1;

    int i = -4;

    //fstream arquivo2;

 	while (arquivo.good()) {
        getline (arquivo, nome1,';');
        getline (arquivo,idade1,'\n');

        f1->setNome(nome1);
        idade = atoi(idade1.c_str());
        f1->setIdade(idade);
        vector_func.push_back(*f1);
    }
    arquivo.close(); // fecho ele

    while (i != 0) {
        cout << "Digite 0 para sair, 1 para cadastrar e 2 para listar\n";
        cin >> i;
        switch(i) {
    case 0:
        i = 0;
        break;

    case 1:
        cout <<"Digite seu nome: \n";
        cin >> nome;
        cout << "Digite sua idade \n";
        cin >> idade;
        f1->setNome(nome);
        f1->setIdade(idade);
        vector_func.push_back(*f1);
        if (arquivo.is_open()) { // se estiver aberto, add
            arquivo << "\n" << nome << ";" << idade;
        } else {
            arquivo.open("lista.csv", ios::out|ios::app); // se n, abro e não sobre escvreve
            arquivo << "\n" << nome << ";" << idade;
        }
        break;
    case 2:
        int tam = vector_func.size();
        for (int k=0; k < tam ; ++k) {
            *f1=vector_func[k];
            cout << f1->getNome() << ", " << f1->getIdade() << "\n";
        }
        break;

    }
}

    arquivo.close();

	return 0;
}
