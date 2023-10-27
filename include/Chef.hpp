#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Chef : public Dibujo, public Actualizable
{
private:
    
public:
    Chef() : Dibujo("Chef")
    {}
    Chef(int x, int y): Dibujo(x,y,"Chef"){

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
    void DesplazarArriba (){
        this ->y -=1;
    }
    void DesplazarAbajo (){
        this ->y +=1;
    }
    ~Chef() {}
};