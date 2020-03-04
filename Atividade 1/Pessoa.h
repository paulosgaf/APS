#ifndef Pessoa_H
#define  Pessoa_H
#include <iostream>
#include <string>
using namespace std;

class Pessoa{

	string nome;
	string sobrenome;

public:
	Pessoa();
	Pessoa(string n, string sn);
	void setNome(string n);
	void setSobreNome(string sn);
	string getNome();
	string getSobreNome();
	string getNomeCompleto();
};

#endif