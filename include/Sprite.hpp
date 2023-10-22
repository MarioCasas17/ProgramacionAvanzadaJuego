#pragma once
#include <list>
#include<Dibujo.hpp>
using namespace std;

class Sprite : public Dibujo
{
private:
    list<Dibujo*> cuadros;
public:
    Sprite(list<Dibujo*>cuadros) {
        this->cuadros = cuadros;
    }
    void dibujar(){
        this->cuadros{cuadroActual}.dibujar();
    }
    void AvanzarCuadro(){
        
    }
    ~Sprite() {}
};