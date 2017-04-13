#include "Medico.h"
#include "Oftalmologista.h"
Oftalmologista::Oftalmologista(){}

Oftalmologista::Oftalmologista(string n, float a, float p, string esp){
    setNome(n);
    setAltura(a);
    setPeso(p);
    setEspecializacao(esp);
}

string Oftalmologista::getHorarioAtendimento(){
     Medico::setHorarioAtendimento("Atendimentos as segundas e quartas, das 7h as 11:30h e 14h as 17h");
    return Medico::getHorarioAtendimento();
}
