#ifndef CONSULTOR_H_INCLUDED
#define CONSULTOR_H_INCLUDED
#include<string>
#include "Funcionario.h"
class Consultor:public Funcionario{


    public:
        Consultor();
        Consultor(string m,string n,float s);
        float getSalario();
        float getSalario(float percentual);


};

#endif // CONSULTOR_H_INCLUDED
