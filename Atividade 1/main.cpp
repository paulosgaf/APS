// Como executar:
// g++ *.cpp *.h  -o teste && ./teste

#include "Pessoa.h"
#include "Funcionario.h"
#include "Professor.h"

int main()
{

	Pessoa pessoa1("Mario", "Lopes");
	Funcionario pessoa2("Lucas", "Mendes", 403616, 2000.00);
	Professor pessoa3("Rafael", "Lira", 1234, 500.00);

	int matricula;
	double salario, salario1, salario2;
	string nome, sobrenome, nomecompleto;


	nome = pessoa1.getNome();
	sobrenome = pessoa1.getSobreNome();
	nomecompleto = pessoa1.getNomeCompleto();

	cout << "\n----------------PESSOA 1----------------\n" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Sobrenome: " << sobrenome << endl;
	cout << "Nome Completo: " << nomecompleto << endl;

	nome = pessoa2.getNome();
	sobrenome = pessoa2.getSobreNome();
	nomecompleto = pessoa2.getNomeCompleto();
	matricula = pessoa2.getMatricula();
	salario = pessoa2.getSalario();
	salario1 = pessoa2.getSalarioPrimeiraParcela();
	salario2 = pessoa2.getSalarioSegundaParcela();

	cout << "\n----------------PESSOA 2----------------\n" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Sobrenome: " << sobrenome << endl;
	cout << "Nome Completo: " << nomecompleto << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Salario: " << salario << endl;
	cout << "Salario Primeira Parcela: " << salario1 << endl;
	cout << "Salario Segunda Parcela: " << salario2 << endl;

	nome = pessoa3.getNome();
	sobrenome = pessoa3.getSobreNome();
	nomecompleto = pessoa3.getNomeCompleto();
	matricula = pessoa3.getMatricula();
	salario = pessoa3.getSalario();
	salario1 = pessoa3.getSalarioPrimeiraParcela();
	salario2 = pessoa3.getSalarioSegundaParcela();

	cout << "\n----------------PESSOA 3----------------\n" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Sobrenome: " << sobrenome << endl;
	cout << "Nome Completo: " << nomecompleto << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Salario: " << salario << endl;
	cout << "Salario Primeira Parcela: " << salario1 << endl;
	cout << "Salario Segunda Parcela: " << salario2 << endl;

	return 0;
}