#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class BurgerTime : public Dibujo, public Actualizable
{
private:
    
public:
    BurgerTime() : Dibujo("Titulo")
    {}
    BurgerTime(int x, int y): Dibujo(x,y,"Titulo"){

    }
    void Actualizar()
    {
        //this->x += 1;
        //this->y += 0;
    }

    void DesplazarIzquierda (){
        this ->x -=1;
    }
    void DesplazarDerecha (){
        this ->x +=1;
    }
    ~BurgerTime() {}
};