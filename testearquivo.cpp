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

class vector_de_funcionario {
    protected:
      vector<Funcionario> vector_func;
    public:
        void  carregarFunc();
        void  cadastraFunc();
        void atualizar();
};
    void vector_de_funcionario::carregarFunc () {
        string nome;
        int idade;
        Funcionario *f1 = new Funcionario();
    	fstream arquivo("lista.csv", ios::in); // aqui abro o arquivo em modo leitura
    	string nome1;
    	string idade1;
     	while (arquivo.good()) {
        getline (arquivo, nome1,';');
        getline (arquivo,idade1,'\n');
        f1->setNome(nome1);
        idade = atoi(idade1.c_str());
        f1->setIdade(idade);
        vector_func.push_back(*f1);
        }
        arquivo.close(); // fecho ele
    }

    void vector_de_funcionario::cadastraFunc () {
        int i = -1;
        string nome;
        int idade;
        Funcionario *f1 = new Funcionario();
        fstream arquivo;
        while (i != 0) {
            cout << "Digite 0 para sair, 1 para cadastrar e 2 para listar, 3 para alterar\n";
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
                case 2:{
                    int tam = vector_func.size();
                    for (int k=0; k < tam; ++k) {
                        *f1=vector_func[k];
                        cout << f1->getNome() << ", " << f1->getIdade() << "\n";
                    }
                    break;
                    }
                case 3:
                    int k2;
                    cout << "Digite o id do funcionario a alterar, 0,1,2,...,n-1\n";
                    cin >> k2;
                    cout <<"Digite seu nome: \n";
                    cin >> nome;
                    cout << "Digite sua idade \n";
                    cin >> idade;
                    f1->setNome(nome);
                    f1->setIdade(idade);
                    vector_func[k2] = *f1;
                    break;
            }
    }

    arquivo.close();
}

void vector_de_funcionario::atualizar() {
    auto i=0;
    int tam = vector_func.size();
    Funcionario *f1 = new Funcionario();
    fstream arquivo;
    arquivo.open("lista.csv", ios::out);
    for (i=0;i<tam; ++i){
        *f1=vector_func[i];
        arquivo << f1->getNome() << ", " << f1->getIdade() << "\n";
    }

}

int main () {
    vector_de_funcionario f2;
    f2.carregarFunc();
    f2.cadastraFunc();
    f2.atualizar();
	return 0;
}
