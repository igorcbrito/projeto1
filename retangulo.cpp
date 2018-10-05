#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(float x, float y, float altura, float largura){

    setVetPol(0, x, y);
    setVetPol(0, x+largura, y);
    setVetPol(0, x+largura, y+altura);
    setVetPol(0, x, y+altura);
}
