#include <iostream>
#include <Mascota.hpp>
int main(int argc, char const *argv[])
{
    Mascota m1;
    Mascota m2;

    m1.Comer();
    m2.Comer();

    std::cout << "Tipos de datos" << std::endl;
    std::cout << "Inicio del Programa" << std::endl;
    std::cout << " int" << sizeof(int) << std::endl;
    std::cout << " char" << sizeof(char) << std::endl;
    std::cout << "bool " << sizeof(bool) << std::endl;
    std::cout << "float " << sizeof(float) << std::endl;
    std::cout << "double " << sizeof(double) << std::endl;
    std::cout << "Mascota " << sizeof(Mascota) << std::endl;
    std::cout << "Direcciones de memoria" << std::endl;
    int a = 4;
    std::cout << "Tamaño: " << sizeof(a) << std::endl;
    std::cout << "Contenido: " << a << std::endl;
    std::cout << "Direccion: " << &a << std::endl;

    void *puntero = malloc(32);
    std::cout << "Direcciones de memoria" << std::endl;
    std::cout << "size of: " << sizeof(puntero) << std::endl;
    std::cout << "Puntero1: " << puntero << std::endl;
    std::cout << "Puntero2: " << &puntero << std::endl;
    free(puntero);

    // Memoria dinamica c
    std::cout << "Mascota en C: " << std::endl;
    Mascota* MascotaC = (Mascota*)malloc(sizeof(Mascota));
    MascotaC->Inicializar();
    MascotaC->Decirnombre();
    MascotaC->Destruir();
    free(MascotaC);
    //-------------------------------------------------------------------
 
    // c++
    std::cout << "Mascota en C++: " << std::endl;
    Mascota* mascotaCPP = new Mascota();
    mascotaCPP->Decirnombre();
    delete mascotaCPP;

   

    return 0;
}
