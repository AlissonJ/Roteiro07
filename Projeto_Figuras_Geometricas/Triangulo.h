#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

class Triangulo{

    private:
        float base;
        float altura;
    public:
        Triangulo(float b,float a);
        float getBase();
        void setBase(float b);
        float getAltura();
        void setAltura(float a);
};


#endif // TRIANGULO_H_INCLUDED
