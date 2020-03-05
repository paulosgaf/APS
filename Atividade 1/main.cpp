// Como executar:
// g++ *.cpp *.h  -o teste && ./teste

#include "Pessoa.h"
#include "Funcionario.h"
#include "Professor.h"
#include "TestaPessoa.h"

int main()
{



	Pessoa pessoa1("Mario", "Lopes");
	Funcionario pessoa2("Lucas", "Mendes", 403616, 2000.00);
	Professor pessoa3("Rafael", "Lira", 1234, 500.00);

	int matricula;
	double salario, salario1, salario2;
	string nome, sobrenome, nomecompleto;


	nome = pessoa2.getNome();
	sobrenome = pessoa2.getSobreNome();
	nomecompleto = pessoa2.getNomeCompleto();
	matricula = pessoa2.getMatricula();
	salario = pessoa2.getSalario();
	salario1 = pessoa2.getSalarioPrimeiraParcela();
	salario2 = pessoa2.getSalarioSegundaParcela();


	cout << "----------------PESSOA 1----------------" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Sobrenome: " << sobrenome << endl;
	cout << "Nome Completo: " << nomecompleto << endl;

	cout << "----------------PESSOA 2----------------" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Sobrenome: " << sobrenome << endl;
	cout << "Nome Completo: " << nomecompleto << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Salario: " << salario << endl;
	cout << "Salario Primeira Parcela: " << salario1 << endl;
	cout << "Salario Segunda Parcela: " << salario2 << endl;

	cout << "----------------PESSOA 3----------------" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Sobrenome: " << sobrenome << endl;
	cout << "Nome Completo: " << nomecompleto << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Salario: " << salario << endl;
	cout << "Salario Primeira Parcela: " << salario1 << endl;
	cout << "Salario Segunda Parcela: " << salario2 << endl;

	return 0;
}