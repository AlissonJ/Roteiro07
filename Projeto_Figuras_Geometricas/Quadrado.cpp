#include "FiguraGeometrica.h"
#include "Quadrado.h"
using namespace std;
Quadrado::Quadrado(float l,string n){
    setLado(l);
    FiguraGeometrica::setNome(n);
}

float Quadrado::getLado(){
    return lado;
}

void Quadrado::setLado(float l){
    lado = l;
}
float Quadrado::calcularArea(){
    float area = (getLado() * getLado());
    return area;
}
