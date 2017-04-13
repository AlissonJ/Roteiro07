#ifndef OTORRINO_H_INCLUDED
#define OTORRINO_H_INCLUDED
#include "Medico.h"
using namespace std;

class Otorrino:public Medico{

   public:
        Otorrino();
        Otorrino(string n,float a,float p,string esp);
        string getHorarioAtendimento();

};

#endif // OTORRINO_H_INCLUDED
