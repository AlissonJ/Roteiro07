#include"Funcionario.h"

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
