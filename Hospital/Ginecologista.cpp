#include "Ginecologista.h"
Ginecologista::Ginecologista(){}

Ginecologista::Ginecologista(string n, float a, float p, string esp){
    setNome(n);
    setAltura(a);
    setPeso(p);
    setEspecializacao(esp);
}

string Ginecologista::getHorarioAtendimento(){
     Medico::setHorarioAtendimento("Atendimentos as segunda, quarta e sexta-feira, das 9h as 11h e 13h as 17h");
    return Medico::getHorarioAtendimento();
}


