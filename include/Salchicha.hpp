#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Salchicha : public Dibujo, public Actualizable
{
private:
public:
    Salchicha() : Dibujo("Salchicha")
    {
    }
    Salchicha(int x, int y) : Dibujo(x, y, "Salchicha")
    {
    }
    void Actualizar()
    {
        // this->x += 1;
        // this->y += 0;
    }

    void DesplazarIzquierda()
    {
        this->x -= 1;
    }
    void DesplazarDerecha()
    {
        this->x += 1;
    }
    ~Salchicha() {}
};