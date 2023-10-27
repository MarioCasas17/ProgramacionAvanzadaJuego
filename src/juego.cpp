#include <curses.h>
#include <iostream>
#include <string>
#include <fstream>
#include <Dibujo.hpp>
#include <unistd.h>
#include <Ventana.hpp>
#include <Actualizable.hpp>
#include <Chef.hpp>
#include <Salchicha.hpp>
#include <BurgerTime.hpp>
#include <Escalera.hpp>
#include <Plataforma.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Chef *Chef1 = new Chef(10, 70);
    Salchicha *Salchicha1 = new Salchicha(180, 10);
    BurgerTime *Titulo1 = new BurgerTime(80, 0);
    Escalera *Escalera1 = new Escalera(164, 60);
    Escalera *Escalera2 = new Escalera(216, 60);
    Escalera *Escalera3 = new Escalera(60, 60);
    Escalera *Escalera4 = new Escalera(112, 60);
    Escalera *Escalera5 = new Escalera(112, 40);
    Escalera *Escalera6 = new Escalera(164, 40);
    Plataforma *Plataforma1 = new Plataforma(80, 60);
    Plataforma *Plataforma2 = new Plataforma(132, 60);
    Plataforma *Plataforma3 = new Plataforma(10, 60);
    Plataforma *Plataforma4 = new Plataforma(182, 60);
    Plataforma *Plataforma5 = new Plataforma(132, 40);

    list<Dibujo *> dibujos;
    dibujos.push_back(Chef1);
    dibujos.push_back(Salchicha1);
    dibujos.push_back(Titulo1);
    dibujos.push_back(Escalera1);
    dibujos.push_back(Escalera4);
    dibujos.push_back(Escalera2);
    dibujos.push_back(Escalera3);
    dibujos.push_back(Escalera5);
    dibujos.push_back(Escalera6);

    dibujos.push_back(Plataforma1);
    dibujos.push_back(Plataforma2);
    dibujos.push_back(Plataforma3);
    dibujos.push_back(Plataforma4);
    dibujos.push_back(Plataforma5);

    list<Actualizable *> actualizables;
    actualizables.push_back(Chef1);
    actualizables.push_back(Salchicha1);
    actualizables.push_back(Titulo1);
    actualizables.push_back(Escalera1);
    actualizables.push_back(Escalera2);
    actualizables.push_back(Escalera3);
    actualizables.push_back(Escalera4);
    actualizables.push_back(Plataforma1);

    getch();

    while (true)
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            // Salir del juego
            break;
        }
        if (key == 'a' || key == KEY_LEFT)
        {
            Chef1->DesplazarIzquierda();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            Chef1->DesplazarDerecha();
        }
        if (key == 'w' || key == KEY_UP)
        {
            Chef1->DesplazarArriba();
        }
        if (key == 's' || key == KEY_DOWN)
        {
            Chef1->DesplazarAbajo();
        }

        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }

    return 0;
}