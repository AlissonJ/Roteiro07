#include<string>
#include "Funcionario.h"
using namespace std;

Funcionario::Funcionario(){}

Funcionario::Funcionario(string m,string n,float s){
    matricula = m;
    nome = n;
    salario = s;
    }

string Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setMatricula(string m){
    matricula = m;
}

string Funcionario::getNome(){
    return nome;
}

void Funcionario::setNome(string n){
    nome = n;
}

float Funcionario::getSalario(){
    return salario;
}

void Funcionario::setSalario(float s){
    salario = s;
}
