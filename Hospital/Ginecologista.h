#ifndef GINECOLOGISTA_H_INCLUDED
#define GINECOLOGISTA_H_INCLUDED
#include "Medico.h"
using namespace std;

class Ginecologista:public Medico{

   public:
        Ginecologista();
        Ginecologista(string n,float a,float p,string esp);
        string getHorarioAtendimento();
};

#endif // GINECOLOGISTA_H_INCLUDED
