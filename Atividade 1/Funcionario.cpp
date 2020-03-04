#include "Funcionario.h"

Funcionario::Funcionario(string n, string sn, int m, double s) : Pessoa(n, sn) {
	matricula = m;
	salario = s;
}

void Funcionario::setMatricula(int m){
	matricula = m;
}

void Funcionario::setSalario(double s){
	salario = s;
}

int Funcionario::getMatricula(){
	return matricula;
}

int Funcionario::getSalario(){
	return salario;
}

double Funcionario::getSalarioPrimeiraParcela(){
	return salario*0.6; 
}

double Funcionario::getSalarioSegundaParcela(){
	return salario*0.4;
}
