#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"
using namespace std;

int main(){
    Funcionario obj("1142","Jorge",3800.55f);
    Consultor c1("1143","Alex",3800.55f);
    float percentual = 15;
    cout.precision(2);
    cout << fixed << "O funcionario: "<< obj.getNome() << " tem salario de R$ "<< obj.getSalario()<<endl;
    cout << fixed << "O consultor: "<< c1.getNome() << " tem salario de R$ "<< c1.getSalario()<<endl;
    cout << fixed << "O novo salario do consultor "<< c1.getNome()<<" com "<<percentual<<"% de aumento e: "<< c1.getSalario(percentual)<<endl;

    return 0;
}
