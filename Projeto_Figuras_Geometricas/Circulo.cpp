#include "FiguraGeometrica.h"
#include "Circulo.h"
using namespace std;

Circulo::Circulo(float r){
    raio = r;
    FiguraGeometrica::nome = "circulo";
}

float Circulo::getRaio(){
    return raio;
}

void Circulo::setRaio(float r){
    raio = r;
}
