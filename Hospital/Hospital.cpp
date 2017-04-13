#include <iostream>
#include "Medico.h"
#include "Cirurgiao.h"
#include "Ginecologista.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
using namespace std;

int main(){
    Cirurgiao m1("Rodrigo",1.75,78,"Cirurgiao");
    Ginecologista m2("Nonato",1.77,83,"Ginecologista");
    Oftalmologista m3("Luiz",1.79,93,"Oftamologista");
    Otorrino m4("Marcos",1.85,88,"Otorrino");

    cout <<"Nome: "<<m1.getNome()<<" Especializacao: " << m1.getEspecializacao()<<" Horario: "<< m1.getHCirurgia() << endl;
    cout <<"Nome: "<<m2.getNome()<<" Especializacao: " << m2.getEspecializacao()<<" Horario: "<< m2.getHorarioAtendimento() << endl;
    cout <<"Nome: "<<m3.getNome()<<" Especializacao: " << m3.getEspecializacao()<<" Horario: "<< m3.getHorarioAtendimento() << endl;
    cout <<"Nome: "<<m4.getNome()<<" Especializacao: " << m4.getEspecializacao()<<" Horario: "<< m4.getHorarioAtendimento() << endl;
    return 0;
}
