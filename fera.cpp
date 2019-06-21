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
		string classe;
		string nome_cientifico;
		char sexo;
		double tamanho;
		string dieta;
		string nome_batismo;
		Veterinario veterinario;
		Tratador tratador;
		
	public:
		Animal(void);
		Animal(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo);
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
		Anfibio(){};
		Anfibio(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo);
		
		//void setTotalMudas();
		//int getTotalMudas();
		//void setData();
		//Data getData();
};

Anfibio::Anfibio(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo) {
	this->id=id;
	this->nome_cientifico = nome_cientifico;
	this->sexo=sexo;
	this->tamanho=tamanho;
	this->dieta=dieta;
	this->nome_batismo = nome_batismo;	
};



class AnfibioExotico : public Anfibio {

public:

	AnfibioExotico();

	~AnfibioExotico();

};
class AnfibioNativo : public Anfibio {

public:

	AnfibioNativo();

	~AnfibioNativo();

};

class Mamifero : public Animal {
	protected:
		string cor_pelo;
	public:
		Mamifero(){};
		Mamifero(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, string cor_pelo);
		//~Mamifero();
		//void setCorPelo();
		//std::string getCorPelo();
};

	Mamifero::Mamifero(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, string cor_pelo){
		this->id = id;
		//this-> classe = classe;
		this->nome_cientifico = nome_cientifico;
		this->sexo=sexo;
		this->tamanho=tamanho;
		this->dieta=dieta;
		this->nome_batismo = nome_batismo;
		
	}


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

class Ave : public Animal {
	protected:
		double tamanho_do_bico;
		double envergadura_asas;
	public:
		//Ave();
		//~Ave();
};
/*void Inserir(int a, int b){
    //aloca a memória para a classe derivada e inicializa seu construtor
    Derivada * derivada = new Derivada(a, b);

    //converte o ponteiro de classe Derivada para de classe Base (upcasting)
    Base * base = derivada;

    //cria um map para armazenar objetos das classes derivadas
    map<int, Base *> ClassesDerivadas;

    //insere um par chave-ponteiro para base no map
    ClassesDerivadas.insert(pair<int, Base *>(1, base));

    for(auto it : ClassesDerivadas){
        /*converte o ponteiro da classe base para um ponteiro classe derivada
        só funciona se a base tiver métodos virtuais*/
     //   Derivada * derivada = dynamic_cast<Derivada*>(it.second);

        //imprime os valores dos membros da classe derivada
 /*       cout << derivada->getValueBase() << endl;
        cout << derivada->getValueDerivada() << endl;
    }
    delete derivada;
} */

class CriarAnimal { //essa classe serve para um suporte aoo menu, é aqui onde será colocada no map o animal
	private:
		int id;
		string classe;
		string nome_cientifico;
		char sexo;
		double tamanho;
		string dieta;
		string nome_batismo;
	public:
		void mamifero();
		void ave();
		void reptil();
		void anfibio();
};
void CriarAnimal::mamifero(){
	string cor_do_pelo;

	cout<< " Digite o id do animal: " << endl;
	cin >> id;
	cout<< " Digite o nome cientifico: " << endl;
	cin >> nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> dieta;
	cout<< " Digite o nome do batismo: " << endl;
	cin >> nome_batismo;
	cout<< " Digite a cor do pelo: " << endl;
	cin >> cor_do_pelo;

	classe = "mamifero";
	Mamifero *m1 = new Mamifero(id ,nome_cientifico,sexo,tamanho,dieta,nome_batismo,cor_do_pelo);
	cout << "o id do animal é: " << m1->getId() <<"\n";
	
	//add no map de mamifero
}
void CriarAnimal::anfibio() {
	//toal de mudas

	cout<< " Digite o id do animal: " << endl;
	cin >> id;
	cout<< " Digite o nome cientifico: " << endl;
	cin >> nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> dieta;
	cout<< " Digite o nome do batismo: " << endl;
	cin >> nome_batismo;


	classe = "Anfibio";
	Anfibio *m1 = new Anfibio(id ,nome_cientifico,sexo,tamanho,dieta,nome_batismo);
	cout << "o id do animal é: " << m1->getId() <<"\n";
	
	//add no map de manfibio
}

void CriarAnimal::ave(){
	double envergadura_asas;
	double tamanho_do_bico;
	classe = "ave";
	cout<< " Digite o nome do animal: " << endl;
	cin >> id;
	cout<< " Digite o nome cientifico: " << endl;
	cin >> nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> dieta;
	cout<< " Digite o nome do batismo " << endl;
	cin >> nome_batismo;
	cout<< " Digite o tamanho do bico: " << endl;
	cin >> tamanho_do_bico;
	cout<< " Digite a envergadura das asas: " << endl;
	cin >> envergadura_asas;
	
	Ave *m1 = new Ave;
	m1->setId(id);
	cout << "o id do animal é: " << m1->getId() <<"\n";

}

/*void CriarAnimal::anfibio(){
	int total_de_muda, dia, mes, ano;

	classe = "anfibio";
	cout<< " Digite o id do animal: " << endl;
	cin >> id;
	cout<< " Digite o nome cientifico: " << endl;
	cin >> nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> dieta;
	cout<< " Digite o nome do batismo " << endl;
	cin >> nome_batismo;
	cout<< " Digite o total de mudas: " << endl;
	cin >> total_de_muda;
	cout<< " Digite o dia da ultima muda: " << endl;
	cin >> dia;
	cout<< " Digite o mes da ultima muda: " << endl;
	cin >> mes;
	cout<< " Digite o ano da ultima muda: " << endl;
	cin >> ano;

	//Date ultima_muda(dia,mes,ano);

	//nimal* anfibio = new Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo , total_de_muda, ultima_muda);
	Anfibio *m1 = new Anfibio;
	m1->setId(id);
	cout << "o id do animal é: " << m1->getId() <<"\n";

}*/

void CriarAnimal::reptil(){
	bool venenoso;
	string tipo_veneno;
	classe = "reptil";
	cout<< " Digite o nome do animal: " << endl;
	cin >> id;
	cout<< " Digite o nome cientifico: " << endl;
	cin >> nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> dieta;
	cout<< " Digite o nome do batismo " << endl;
	cin >> nome_batismo;
	cout<< " Digite false caso não seja venenoso e true caso seja venenoso: " << endl;
	cin >> venenoso;
	cout<< " Digite o tipo do veneno " << endl;
	cin >> tipo_veneno;
	Reptil *m1 = new Reptil;
	m1->setId(id);
	cout << "o id do animal é: " << m1->getId() <<"\n";

	
}

class Menu {
	public:
		void cadastrarAnimal();
		void removerAnimal();
		void alterarAnimal();
		void consultarAnimal();
		void cadastrarFuncionario();
		void removerFuncionario();
		void alterarFuncionario();
		void consultarFuncionario();
};


void Menu::cadastrarAnimal(){

	int entrada = 0;
	CriarAnimal nome;

	cout<<"1. Mamifero " << endl;
	cout<<"2. Ave " << endl;
	cout<<"3. Anfibio " << endl;
	cout<<"4. Reptil " << endl;
	cout<<"ESCOLHA A OPCAO : " << endl;
	cin>>entrada;


	switch(entrada){

	case 1:
		cout << "opcao " << entrada;
		nome.mamifero();
		break;
	case 2:
		cout << " opcao " << entrada;
		nome.ave();
		break;
	case 3:
		cout << "opcao " << entrada;
		nome.anfibio();
		break;
	case 4:
		cout << "opcao " << entrada;
		nome.reptil();
		break;
	default: 
		cout << "Opcao  " << entrada << " invalida. ";
		return cadastrarAnimal();
		break;
		
	
	}
};


void Menu::removerAnimal(){

}
void Menu::alterarAnimal(){

}
void Menu::consultarAnimal(){

}
void Menu::cadastrarFuncionario(){

}
void Menu::removerFuncionario(){

}
void Menu::alterarFuncionario(){

}
void Menu::consultarFuncionario(){

}

	
int main () {
/*	Veterinario *f1 = new Veterinario;
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
    cout << f2->getNome() << " deu certo \n";
*/

	 cout << "TESTANDO Animais, até agora Mamiferos e Anfibios ok /// \n";
	map <int, Mamifero> mamapmamifero;
	//Mamifero *m1 = new Mamifero;
	Menu ccc;
	ccc.cadastrarAnimal();


    return 0;
}
