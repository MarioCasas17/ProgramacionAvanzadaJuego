#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Datos : public Dibujo, public Actualizable
{
private:
    
public:
    Datos() : Dibujo("Vida")
    {}
    Datos(int x, int y): Dibujo(x,y,"Vida"){

    }
    void Actualizar()
    {
        //this->x += 1;
        //this->y += 0;
    }
};