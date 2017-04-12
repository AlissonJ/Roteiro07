#include"Consultor.h"

float Consultor::getSalario(){
    float novoSalario = salario*percentual;
    return novoSalario;
}

float Consultor::getPercentual(){
    return percentual;
}

void Consultor::setPercentual(float p){
    percentual = p;
}
