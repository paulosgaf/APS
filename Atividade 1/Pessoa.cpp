#include "Pessoa.h"

Pessoa::Pessoa(string n, string sn){
	nome = n;
	sobrenome = sn;
}

void Pessoa::setNome(string n){
	nome = n;

}

void Pessoa::setSobreNome(string sn){
	sobrenome = sn;

}

string Pessoa::getNome(){
	return nome;
}

string Pessoa::getSobreNome(){
	return sobrenome;
}

string Pessoa::getNomeCompleto(){
	return nome + " " + sobrenome;

}
