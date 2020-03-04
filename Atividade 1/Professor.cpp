#include "Professor.h"

Professor::Professor(string n, string sn, int m, double s) : Funcionario(n, sn, m, s) {

}

double Professor::getSalarioPrimeiraParcela(){
	return salario; 
}

double Professor::getSalarioSegundaParcela(){
	return 0;
}
