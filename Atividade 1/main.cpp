// Como executar:
// g++ *.cpp *.h  -o teste && ./teste

#include "Pessoa.h"
#include "Funcionario.h"
#include "Professor.h"
#include "TestaPessoa.h"

int main()
{

/*

	Pessoa pessoa1("paulo","sergio");

	pessoa1.setNome("maria");
	pessoa1.setSobreNome("de lourdes");

	string nome = pessoa1.getNome();
	string sobrenome = pessoa1.getSobreNome();
	string nomecompleto = pessoa1.getNomeCompleto();

	cout << nome << endl;
	cout << sobrenome << endl;
	cout << nomecompleto << endl;

	Funcionario pessoa2("paulo","sergio",403616,1000);

	pessoa2.setNome("maria");
	pessoa2.setSobreNome("sgaf");
	pessoa2.setMatricula(12345);
	pessoa2.setSalario(1000);

	nome = pessoa2.getNome();
	sobrenome = pessoa2.getSobreNome();
	nomecompleto = pessoa2.getNomeCompleto();
	int matricula = pessoa2.getMatricula();
	double salario = pessoa2.getSalario();
	double salario1 = pessoa2.getSalarioPrimeiraParcela();
	double salario2 = pessoa2.getSalarioSegundaParcela();

	cout << nome << endl;
	cout << sobrenome << endl;
	cout << nomecompleto << endl;
	cout << matricula << endl;
	cout << salario << endl;
	cout << salario1 << endl;
	cout << salario2 << endl;

	Professor pessoa3("berneck", "castro", 1234, 2000);

	nome = pessoa3.getNome();
	sobrenome = pessoa3.getSobreNome();
	nomecompleto = pessoa3.getNomeCompleto();
	matricula = pessoa3.getMatricula();
	salario = pessoa3.getSalario();
	salario1 = pessoa3.getSalarioPrimeiraParcela();
	salario2 = pessoa3.getSalarioSegundaParcela();

	cout << nome << endl;
	cout << sobrenome << endl;
	cout << nomecompleto << endl;
	cout << matricula << endl;
	cout << salario << endl;
	cout << salario1 << endl;
	cout << salario2 << endl;

*/

	TestaPessoa testa();

	Pessoa pessoa;


	pessoa = testa.pessoa1();


	string nome = pessoa.getNome();
	cout << nome << endl;

	return 0;
}