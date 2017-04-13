#ifndef CIRURGIAO_H_INCLUDED
#define CIRURGIAO_H_INCLUDED
#include "Medico.h"
using namespace std;

class Cirurgiao:public Medico{

   public:
       Cirurgiao();
       Cirurgiao(string n,float a,float p,string es);
       string getHCirurgia();
};

#endif // CIRURGIAO_H_INCLUDED
