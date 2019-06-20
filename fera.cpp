#include <string>
#include <iostream>
#include <map>
using namespace std;
class Funcionario {
	protected:
		int id;
		string nome;
		string cpf;
		short int idade;
		short int tipo_sanguineo;
		char fator_rh;
		string especialidade;
	public:
	    //Funcionario();
		//~Funcionario();
		void setId(int id);
		int getId();
		void setNome(string nome);
		string getNome();
		void setCpf(string cpf);
		string getCpf();
		void setIdade(short int idade);
		short int getIdade();
		void setTipoSanguineo(short int tipo_sanguineo);
		short int getTipoSanguineo();
		void setFatorRh(char fator_rh);
		char getFatorRh();
		void setEspecialidade(string especialidade);
		string getEspecialidade();
};

	void Funcionario::setId(int id){
		this->id = id;
	}
	int Funcionario::getId(){
		return this->id;
	}
	void Funcionario::setNome(string nome){
		this->nome = nome;
	}
	string Funcionario::getNome(){
		return this->nome;
	}
	void Funcionario::setCpf(string cpf){
		this->cpf = cpf;
	}
	std::string Funcionario::getCpf(){
		return this->cpf;
	}
	void Funcionario::setIdade(short int idade){
		this->idade = idade;
	}
	short int Funcionario::getIdade(){
		return this->idade;
	}
	void Funcionario::setTipoSanguineo(short int tipo_sanguineo){
		this->tipo_sanguineo = tipo_sanguineo;
	}
	short int Funcionario::getTipoSanguineo(){
		return this->tipo_sanguineo;
	}
	void Funcionario::setFatorRh(char fator_rh){
		this->fator_rh = fator_rh;
	}
	char Funcionario::getFatorRh(){
		return fator_rh;
	}
	void Funcionario::setEspecialidade(string especialidade){
		this->especialidade = especialidade;
	}
	string Funcionario::getEspecialidade(){
		return especialidade;
	}
	
	
class Tratador : public Funcionario {
	private:
		int nivel_de_seguranca;
	public:
		//Tratador();
		//~Tratador();
		void setNivel(int ni);
		int getNivel ();
};
	void Tratador::setNivel(int ni) {
		nivel_de_seguranca = ni;
	}
	int Tratador::getNivel() {
		return nivel_de_seguranca;
	}

class Veterinario : public Funcionario {
	private:
		string crmv;
	
	public:
		//Veterinario();
		//~Veterinario();
	void setCrmv(string c);
	string getCrmv ();
};
	void Veterinario::setCrmv(string c) {
		crmv = c;
	}
	string Veterinario::getCrmv(){
		return crmv;
	}

class Animal {
	protected:
		int id;
		std::string classe;
		std::string nome_cientifico;
		char sexo;
		double tamanho;
		std::string dieta;
		std::string nome_batismo;
		Veterinario veterinario;
		Tratador tratador;
		
	public:
		Animal();
		~Animal();
		void setId(int id);
		int getId();
		void setClasse(std::string classe);
		std::string getClasse();
		void setNomeCientifico(std::string nome_cientifico);
		std::string getNomeCientifico();
		void setSexo(char sexo);
		char getSexo();
		void setTamanho(double tamanho);
		double getTamanho();
		void setDieta(std::string dieta);
		std::string getDieta();
		void setNomeBatismo(std::string nome_batismo);
		std::string getNomeBatismo();
};



Animal::Animal(){};
Animal::~Animal(){};

void Animal::setId(int id){
	this->id = id;
}
int Animal::getId(){
	return this->id;
}
void Animal::setClasse(std::string classe){
	this->classe = classe;
}
std::string Animal::getClasse(){
	return this->classe;
}
void Animal::setNomeCientifico(std::string nome_cientifico){
	this->nome_cientifico = nome_cientifico;
}
std::string Animal::getNomeCientifico(){
	return this->nome_cientifico;
}
void Animal::setSexo(char sexo){
	this->sexo = sexo;
}
char Animal::getSexo(){
	return this->sexo;
}
void Animal::setTamanho(double tamanho){
	this->tamanho = tamanho;
}
double Animal::getTamanho(){
	return this->tamanho;
}
void Animal::setDieta(std::string dieta){
	this->dieta = dieta;
}
std::string Animal::getDieta(){
	return this->dieta;
}
void Animal::setNomeBatismo(std::string nome_batismo){
	this->nome_batismo = nome_batismo;
}
std::string Animal::getNomeBatismo(){
	return this->nome_batismo;
}


typedef struct Data{
	short int dia;
	short int mes;
	short int ano;
}Data;

class Anfibio : public Animal {
	protected:
		int total_de_mudas;
		Data ultima_muda;
	public:
		Anfibio();
		~Anfibio();
		//void setTotalMudas();
		//int getTotalMudas();
		//void setData();
		//Data getData();
};

Anfibio::Anfibio(){};
Anfibio::~Anfibio(){};

class Mamifero : public Animal {
	protected:
		std::string cor_pelo;
	public:
		Mamifero();
		~Mamifero();
		//void setCorPelo();
		//std::string getCorPelo();
};


Mamifero::Mamifero(){};
Mamifero::~Mamifero(){};

class Reptil : public Animal {
	protected:
		bool venenoso;
		std::string tipo_venenoso;
	public:
		Reptil();
		~Reptil();
};

Reptil::Reptil(){};
Reptil::~Reptil(){};


	
int main () {
	Veterinario *f1 = new Veterinario;
	f1->setNome("Marcos");
	map <int, Veterinario> mapavet;
	//cout << mapavet.size();
	if (mapavet.empty()) {
		mapavet[0] = *f1;
	}
	
	cout << "oi, "<< f1->getNome();
	f1->setCrmv("12");
	cout << f1->getNome() << " seu crmv é : " << f1->getCrmv();
	
	cout << "testando map:\n === mostrando o conteudo do primeiro elementro do map:\n" ;
	cout << "mapavet: " << mapavet[0].getNome();
	cout << "\n\n\n ============ \n\n\nTestando Tratador\n";
	
	Tratador *f2= new Tratador;
	f2->setNome("Marcos");
	map <int, Tratador> mapatrat;
	//cout << mapavet.size();
	if (mapatrat.empty()) {
		mapatrat[0] = *f2;
	}
	
	cout << "oi, "<< f2->getNome();
	f2->setNivel(2);
	cout << f2->getNome() << " seu Nivel é : " << f2->getNivel();
	 
	cout << "Criando 3 Tratadores\n";
	string nome_trat;
	//int i;
	int k =1;
	while (k<=3) {
		cin >> nome_trat;
		//cin << i;
       	f2->setNome(nome_trat);
        cout << f2->getNome()<<"\n";
        mapatrat[k] = *f2;
        k++;
	} 
    *f2=mapatrat[2];
    cout << f2->getNome() << "\n";
    return 0;
}
