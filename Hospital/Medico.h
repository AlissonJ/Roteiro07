#ifndef MEDICO_H_INCLUDED
#define MEDICO_H_INCLUDED
#include<string>
#include <iostream>
using namespace std;
class Medico{

    private:
        string nome;
        float altura;
        float peso;
        string especializacao;
        string horarioAtendimento;
    public:
        Medico();
        Medico(string n,float a,float p);
        string getNome();
        void setNome(string n);
        float getAltura();
        void setAltura(float a);
        float getPeso();
        void setPeso(float p);
        string getEspecializacao();
        void setEspecializacao(string es);
        string getHorarioAtendimento();
        void setHorarioAtendimento(string h);
};

#endif // MEDICO_H_INCLUDED
