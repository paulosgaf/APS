#ifndef Funcionario_H
#define Funcionario_H

#include "Pessoa.h"

class Funcionario : public Pessoa {

	int matricula;
	double salario;

public:
	Funcionario();
	Funcionario(string n, string sn, int m, double s);
	void setMatricula(int m);
	void setSalario(double s);
	int getMatricula();
	int getSalario();
	double getSalarioPrimeiraParcela();
	double getSalarioSegundaParcela();

	friend class Professor;

};

#endif