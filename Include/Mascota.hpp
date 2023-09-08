#include <iostream>
#include <string>
#include <cstdio>
class Mascota
{
private:
    std::string nombre;
public:
    Mascota(/* args */) {
        std::cout<<"Ha nacido una nueva mascota"<<std::endl;
        this ->nombre = "Firulais";
    }
    ~Mascota() {
        std::cout<<"Adios mundeo cruel"<<std::endl;
    }
    void Comer (){
            std::cout<<"Estoy comiendo"<<std::endl;
    }
    void Decirnombre (){
        std::cout<<"Mi nombre es: "<< this ->nombre <<std::endl;
    }
    void Inicializar (){
        std::cout<<"Ha nacido una nueva mascota"<<std::endl;
        this ->nombre = "Firulais";
    }
    void Destruir (){
        std::cout<<"Adios mundeo cruel"<<std::endl;
    }
};