#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Escalera : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Escalera() : Dibujo("Escalera")
    {
    }
    Escalera(int x, int y) : Dibujo(x, y, "Escalera")
    {
    }
    void Actualizar()
    {
        // this->x += 1;
        // this->y += 0;
    }
    ~Escalera() {}
};