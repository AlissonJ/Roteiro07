#include "Medico.h"
#include <iostream>
#include<string>
Medico::Medico(){}

Medico::Medico(string n, float a, float p){
    nome = n;
    altura = a;
    peso = p;
}

string Medico::getNome(){
    return nome;
}

void Medico::setNome(string n){
    nome = n;
}

float Medico::getAltura(){
    return altura;
}

void Medico::setAltura(float a){
    altura = a;
}

float Medico::getPeso(){
    return peso;
}

void Medico::setPeso(float p){
    peso = p;
}

string Medico::getEspecializacao(){
    return especializacao;
}

void Medico::setEspecializacao(string es){
    especializacao = es;
}
string Medico::getHorarioAtendimento(){
    return horarioAtendimento;
}
void Medico::setHorarioAtendimento(string h){
    horarioAtendimento = h;
}


