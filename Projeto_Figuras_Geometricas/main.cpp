#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
using namespace std;

int main(){
    Circulo c1(3.00,"Circulo01");
    Quadrado q1(4.00,"Quadrado01");
    Triangulo t1(3.00,5.00,"Triangulo01");
    cout.precision(2);
    cout << fixed <<"A figura geometrica : c1 eh um "<<c1.getNome()<<" e tem area igual -> "<<c1.calcularArea() << endl;
    cout << fixed <<"A figura geometrica : q1 eh um "<<q1.getNome()<<" e tem area igual -> "<<q1.calcularArea() << endl;
    cout << fixed <<"A figura geometrica : t1 eh um "<<t1.getNome()<<" e tem area igual -> "<<t1.calcularArea() << endl;


    return 0;
}
