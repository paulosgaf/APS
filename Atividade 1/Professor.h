#ifndef Professor_H
#define Professor_H

#include "Funcionario.h"

class Professor : public Funcionario {

public:
	Professor();
	Professor(string n, string sn, int m, double s);
	double getSalarioPrimeiraParcela();
	double getSalarioSegundaParcela();
};

#endif