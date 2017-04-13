#ifndef OFTALMOLOGISTA_H_INCLUDED
#define OFTALMOLOGISTA_H_INCLUDED
#include "Medico.h"
using namespace std;

class Oftalmologista:public Medico{

   public:
        Oftalmologista();
        Oftalmologista(string n,float a,float p,string esp);
        string getHorarioAtendimento();
};
#endif // OFTALMOLOGISTA_H_INCLUDED
