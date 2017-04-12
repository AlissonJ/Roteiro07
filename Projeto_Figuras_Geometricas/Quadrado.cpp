#include "FiguraGeometrica.h"
#include "Quadrado.h"
using namespace std;
Quadrado::Quadrado(float l){
    lado = l;
    FiguraGeometrica::nome = "quadrado";
}

float Quadrado::getLado(){
    return lado;
}

void Quadrado::setLado(float l){
    lado = l;
}
float FiguraGeometrica::calcularArea(){
    float area = (Quadrado::lado * Quadrado::lado);
    return area;
}
