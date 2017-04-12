#include "FiguraGeometrica.h"
#include "Triangulo.h"
using namespace std;

Triangulo::Triangulo(float b,float a){
     base = b;
     altura a;
     FiguraGeometrica::nome ="triangulo";
}

float Triangulo::getBase(){
    return base;
}

void Triangulo::setBase(float b){
    base = b;
}

float Triangulo::getAltura(){
    return altura;
}

void Triangulo::setAltura(float a){
    altura = a;
}

float FiguraGeometrica::calcularArea(){
    float area = (Triangulo::base * Triangulo::altura) / 2;
    return area;
}
