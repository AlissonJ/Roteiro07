#ifndef QUADRADO_H_INCLUDED
#define QUADRADO_H_INCLUDED
#include "FiguraGeometrica.h"

class Quadrado:public FiguraGeometrica{

    private:
        float lado;
    public:
        Quadrado(float l,string n);
        float getLado();
        void setLado(float l);
        float calcularArea();
};

#endif // QUADRADO_H_INCLUDED
