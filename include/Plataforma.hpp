#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Plataforma : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Plataforma() : Dibujo("Plataforma")
    {}
    Plataforma(int x, int y): Dibujo(x,y,"Plataforma"){

    }
    void Actualizar()
    {
        //this->x += 1;
        //this->y += 0;
    }
    ~Plataforma() {}
};