#ifndef CONSULTOR_H_INCLUDED
#define CONSULTOR_H_INCLUDED
#include"Funcionario.h"
class Consultor:Funcionario{

    private:
        float percentual = 0.10;
    public:
        float getSalario();
        float getPercentual();
        void setPercentual(float p);

};

#endif // CONSULTOR_H_INCLUDED
