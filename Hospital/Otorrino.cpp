#include "Medico.h"
#include "Otorrino.h"
Otorrino::Otorrino(){}

Otorrino::Otorrino(string n, float a, float p, string esp){
    setNome(n);
    setAltura(a);
    setPeso(p);
    setEspecializacao(esp);
}

string Otorrino::getHorarioAtendimento(){
     Medico::setHorarioAtendimento("Atendimentos as terças e quintas, das 9h as 11h e 15h as 19h");
    return Medico::getHorarioAtendimento();
}

