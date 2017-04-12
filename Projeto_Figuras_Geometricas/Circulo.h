#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

class Circulo{
    private:
        float pi = 3.14;
        float raio;
        //pi*r² = area
    public:
        Circulo(float raio);
        float getRaio();
        void setRaio(float r);
};


#endif // CIRCULO_H_INCLUDED
