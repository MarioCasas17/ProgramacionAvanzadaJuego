#include <curses.h>
#include <iostream>
#include <string>
#include <fstream>
#include <Dibujo.hpp>
#include <unistd.h>
#include <Ventana.hpp>
#include <Actualizable.hpp>
#include <Chef.hpp>
#include <Datos.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Chef* Chef1=new Chef(10, 10);
    Datos* Dato1=new Datos(20,0);

    list<Dibujo*> dibujos;
    dibujos.push_back(Chef1);
    dibujos.push_back(Dato1);


    list<Actualizable*>actualizables;
    actualizables.push_back(Chef1);
    actualizables.push_back(Dato1);
    getch();

    while (true){
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            //Salir del juego
            break;
        }
        if (key == 'a'|| key == KEY_LEFT){
            Chef1->DesplazarIzquierda();
        }
        if (key == 'd'|| key == KEY_RIGHT){
            Chef1->DesplazarDerecha();
        }
        
      
        
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }

    return 0;

}