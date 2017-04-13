#include<string>
#include "Consultor.h"

Consultor::Consultor(){}

Consultor::Consultor(string m,string n,float s){
    setMatricula(m);
    setNome(n);
    setSalario(s);
}

float Consultor::getSalario(){
    float novoSalario = Funcionario::getSalario() + (Funcionario::getSalario() * 0.1);
    return novoSalario;
}

float Consultor::getSalario(float novoPercentual){
    float novoSalario = Funcionario::getSalario() + (Funcionario::getSalario() * novoPercentual/100);
    return novoSalario;
}

/*float Consultor::getPercentual(){
    return percentual;
}

void Consultor::setPercentual(float p){
    percentual = p;
}
*/
