#ifndef FIGURAGEOMETRICA_H_INCLUDED
#define FIGURAGEOMETRICA_H_INCLUDED
#include<string>
using namespace std;

class FiguraGeometrica{

    private:
        string nome;
    public:
        FiguraGeometrica();
        float calcularArea();
        string getNome();
        void setNome(string n);

};

#endif // FIGURAGEOMETRICA_H_INCLUDED
