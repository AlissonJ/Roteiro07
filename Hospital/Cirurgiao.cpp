
#include "Cirurgiao.h"
#include<string>

Cirurgiao::Cirurgiao()
{}

Cirurgiao::Cirurgiao(string n, float a, float p, string es){
    setNome(n);
    setAltura(a);
    setPeso(p);
    setEspecializacao(es);
}

string Cirurgiao::getHCirurgia(){
    Medico::setHorarioAtendimento("Cirurgias as segundas,quartas e sextas, das 8h as 11h e 15h as 19h");
    return Medico::getHorarioAtendimento();
}





