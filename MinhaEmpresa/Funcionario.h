#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

#include <iostream>
#include<string>
using namespace std;

class Funcionario{

    private:
        string matricula;
        string nome;
        float salario;
    public:
        Funcionario();
        Funcionario(string m,string n,float s);
        string getMatricula();
        void setMatricula(string m);
        string getNome();
        void setNome(string n);
        float getSalario();
        void setSalario(float s);
};


#endif // FUNCIONARIO_H_INCLUDED
