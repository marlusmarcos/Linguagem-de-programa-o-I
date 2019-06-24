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
	    Funcionario(void);
		Funcionario(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade);
        ~Funcionario();
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
Funcionario::Funcionario(){};
Funcionario::~Funcionario(){}; 
	
	
class Tratador : public Funcionario {
	protected:
		int nivel_de_seguranca;
	public:
		Tratador(){};
        Tratador(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade, int nivel_de_seguranca);
		
		//void setNivel(int ni);
		int getNivel ();
		void Imprimir();

};
void Tratador::Imprimir() {
	cout << "ID:" << id << "\nNome: " << nome << "\nCPF: " << cpf << "\nIdade: " << idade << "\nTipo sanguíneo: " << tipo_sanguineo << "\nFator RH: " << fator_rh  << "\nEspecialidade: "
	<< especialidade << "\nNível de segurança: " << nivel_de_seguranca <<endl;
}

Tratador::Tratador(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade, int nivel_de_seguranca){
	this->id=id;
	this->nome=nome;
	this->cpf=cpf;
	this->idade=idade;
	this->tipo_sanguineo = tipo_sanguineo;
	this->fator_rh= fator_rh;
	this->especialidade=especialidade;
	this->nivel_de_seguranca=nivel_de_seguranca;
}

int Tratador::getNivel() {
	return nivel_de_seguranca;
}

class Veterinario : public Funcionario {
	private:
		string crmv;
	
	public:
		Veterinario(){};
		Veterinario(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade, string crmv);

		//void setCrmv(string c);
		string getCrmv ();
		void Imprimir();
};
void Veterinario::Imprimir() {
	cout << "ID:" << id << "\nNome: " << nome << "\nCPF: " << cpf << "\nIdade: " << idade << "\nTipo sanguíneo: " << tipo_sanguineo << "\nFator RH: " << fator_rh  << "\nEspecialidade: "
	<< especialidade << "\nCRMV: " << crmv <<endl;
}

Veterinario::Veterinario(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade, string crmv)
{
	this->id=id;
	this->nome=nome;
	this->cpf=cpf;
	this->idade=idade;
	this->tipo_sanguineo = tipo_sanguineo;
	this->fator_rh= fator_rh;
	this->crmv=crmv;
}
string Veterinario::getCrmv(){
	return crmv;
};

/// ================================================================================================================================================================================
///=================================================================================================================================================================================
/// =========================================================== CLASSE ANIMAL =======================================================


class Animal {
	protected:
		int id;
		string classe;
		string nome_cientifico;
		char sexo;
		double tamanho;
		string dieta;
		string nome_batismo;
		//Veterinario veterinario;	
		//Tratador tratador;
		
	public:
		Animal(void);
		Animal(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo);
		~Animal();
		void setId(int id);
		int getId();
		void setClasse(std::string classe);
		string getClasse();
		void setNomeCientifico(std::string nome_cientifico);
		string getNomeCientifico();
		void setSexo(char sexo);
		char getSexo();
		void setTamanho(double tamanho);
		double getTamanho();
		void setDieta(std::string dieta);
		string getDieta();
		void setNomeBatismo(std::string nome_batismo);
		string getNomeBatismo();
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
		Anfibio(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo); //aqui falta total de mudas e ultima muda
		
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
		string tipo_venenoso;
	public:
		Reptil(){};
		Reptil(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo,  bool venenoso, string tipo_venenoso);
		
};
	Reptil::Reptil(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, bool venenoso, string tipo_venenoso){
		this->id = id;
		//this-> classe = classe;
		this->nome_cientifico = nome_cientifico;
		this->sexo=sexo;
		this->tamanho=tamanho;
		this->dieta=dieta;
		this->nome_batismo = nome_batismo;
		this->venenoso=venenoso;
		this->tipo_venenoso=tipo_venenoso;
		
	}

class Ave : public Animal {
	protected:
		double tamanho_do_bico;
		double envergadura_asas;
	public:
        Ave(){}
        Ave(int id, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, double tamanho_do_bico, double envergadura_asas);
		
};


    Ave::Ave(int id, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, double tamanho_do_bico, double envergadura_asas) {
        this->id=id;
        this->nome_cientifico = nome_cientifico;
		this->sexo=sexo;
		this->tamanho=tamanho;
		this->dieta=dieta;
		this->nome_batismo = nome_batismo;
        this->tamanho_do_bico=tamanho_do_bico;
        this->envergadura_asas=envergadura_asas;
    }
		


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
        //converte o ponteiro da classe base para um ponteiro classe derivada
        só funciona se a base tiver métodos virtuais*/
     //   Derivada * derivada = dynamic_cast<Derivada*>(it.second);

        //imprime os valores dos membros da classe derivada
 /*       cout << derivada->getValueBase() << endl;
        cout << derivada->getValueDerivada() << endl;
    }
    delete derivada;
} */

class GerenciarFuncionario {
	private:
		int id;
		string nome;
		string cpf;
		short int idade;
		short int tipo_sanguineo;
		char fator_rh;
		string especialidade;
	public:
        void tratador();
        void veterinario();
};
void GerenciarFuncionario::tratador() {
	int nivel_de_seguranca;
	cout <<"Digite o ID do Funcionario:\n";
	cin >> id;
	cout << "Digite o nome:\n";
	cin >> nome;
	cout << "Digite seu cpf:\n";
	cin >> cpf;
	cout << "Digite sua idade:\n";
	cin >> idade;
	cout << "Digite seu tipo sanguíneo:\n";
	cin >> tipo_sanguineo;
	cout << "Digite seu fator RH:\n";
	cin >> fator_rh;
	cout << "Digite sua especialidade \n";
	cin >> especialidade;
	cout << "Digite seu nível de segurança:\n";
	cin >> nivel_de_seguranca;
	Tratador *t1 = new Tratador(id, nome, cpf, idade, tipo_sanguineo,fator_rh, especialidade, nivel_de_seguranca);
	cout << "O id do tratador é: " << t1->getId() << "e seu nome é: " << t1->getNome() << "\n";
	t1->Imprimir();
}

void GerenciarFuncionario::veterinario() {
	string crmv;
	cout <<"Digite o ID do Funcionario:\n";
	cin >> id;
	cout << "Digite o nome:\n";
	cin >> nome;
	cout << "Digite seu cpf:\n";
	cin >> cpf;
	cout << "Digite sua idade:\n";
	cin >> idade;
	cout << "Digite seu tipo sanguíneo:\n";
	cin >> tipo_sanguineo;
	cout << "Digite seu fator RH:\n";
	cin >> fator_rh;
	cout << "Digite sua especialidade \n";
	cin >> especialidade;
	cout << "Digite seu crmv:\n";
	cin >> crmv;
	Veterinario *t1 = new Veterinario(id,nome,cpf, idade,tipo_sanguineo,fator_rh, especialidade,  crmv);
	cout << "O id do veterinario é: " << t1->getId() << "e seu nome é: " << t1->getNome() << endl;
	//int total = map_vet.size();
	//map_vet.insert(pair<;int, Veterinario> (0, *t1);
	t1->Imprimir();

}


class GerenciarAnimal { //essa classe serve para um suporte aoo menu, é aqui onde será colocada no map o animal
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
void GerenciarAnimal::mamifero(){
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
void GerenciarAnimal::anfibio() {
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


void GerenciarAnimal::reptil() {
	bool venenoso;
	string tipo_venenoso;

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
	cout << "Digite 1 para venenoso ou 0 para não venenoso" << endl;
	cin >> venenoso;
	cout << "Digite o tipo do neveno" << endl;
	cin >> tipo_venenoso;


	classe = "reptil";
	Reptil *m1 = new Reptil(id ,nome_cientifico,sexo,tamanho,dieta,nome_batismo, venenoso, tipo_venenoso);
	cout << "o id do animal é: " << m1->getId() <<"\n";
	
	//add no map de manfibio
}



void GerenciarAnimal::ave(){
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
	
	Ave *m1 = new Ave(id, nome_cientifico, sexo, tamanho, dieta, nome_batismo, tamanho_do_bico, envergadura_asas);

	cout << "o id do animal é: " << m1->getId() <<"\n";

}



class Menu {
	public:
        void meu_menu();
		void cadastrarAnimal();
		void removerAnimal();
		void alterarAnimal();
		void consultarAnimal();
		void cadastrarFuncionario();
		void removerFuncionario();
		void alterarFuncionario();
		void consultarFuncionario();
};
void Menu::meu_menu() {
    int op;
    cout << "Digite 1 para cadastrar animal\n";
    cout <<"Digite 2 para remover um animal\n";
    cout <<"Digite 3 para alterar um animal\n";
    cout <<"Digite 4 para consultar um animal\n";
    cout <<"Digite 5 para cadastrar um funcionario\n";
    cout << "Digite 6 para remover um funcionario\n";
    cout <<"Digite 7 para alterar um Funcionario\n";
    cout << "Digite 8 para consultar um funcionario\n";
    Menu m_menu;
    cin >> op;
    switch (op) {
        case 1:
        	cout << " opção: " << op << endl;
       	 	m_menu.cadastrarAnimal();
        	break;
    
		case 5:
			cout << "opção : " << op << endl;
			m_menu.cadastrarFuncionario();
			break;
		default:
			//return m_menu();
			break;
	}

}


void Menu::cadastrarAnimal(){

	int entrada = 0;
	GerenciarAnimal nome;

	cout<<"1. Mamifero " << endl;
	cout<<"2. Ave " << endl;
	cout<<"3. Anfibio " << endl;
	cout<<"4. Reptil " << endl;
    cout << "0. Voltar ao menu\n";
	cout<<"ESCOLHA A OPCAO : " << endl;
	cin>>entrada;


	switch(entrada){
    case 0:
        return meu_menu();
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
	/*mostrar a opção de escolha, entre mamiferos, aves e entre outros..*/
	/*receber a entrada e printar a lista de mamiferos(exemplo), print seu nome e ID*/ 
	/*Receber o id, e no id faz a comparação na lista, se for igual, da um erese no map, removendo o animal da lista*/
	//TODO:


}
void Menu::alterarAnimal(){

}
void Menu::consultarAnimal(){

}
void Menu::cadastrarFuncionario(){

	int entrada = 0;
	GerenciarFuncionario nome;

	cout<<"1. Tratador " << endl;
	cout<<"2. Veterinário " << endl;
    cout << "0. Voltar ao menu\n";
	cout<<"ESCOLHA A OPCAO : " << endl;
	cin>>entrada;


	switch(entrada){
    case 0:
        return meu_menu();
	case 1:
		cout << "opcao " << entrada;
		nome.tratador();
		break;
	case 2:
		cout << " opcao " << entrada;
		nome.veterinario();
		break;
	default: 
		cout << "Opcao  " << entrada << " invalida. ";
		return cadastrarAnimal();
		break;
};


}
void Menu::removerFuncionario(){

}
void Menu::alterarFuncionario(){

}
void Menu::consultarFuncionario(){

}

	
int main () {
	map <int, Veterinario> map_vet;
    cout << "TESTANDO  (Animais estão todos okay)/// \n";
	Menu ccc;
	ccc.meu_menu();


    return 0;
}
