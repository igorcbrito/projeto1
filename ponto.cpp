#include "ponto.h"


Ponto::Ponto(float nx, float ny){
    x = nx;
    y = ny;
}

void Ponto::setX(float nx){
    x = nx;
}

void Ponto::setY(float ny){
    y = ny;
}

void Ponto::setXY(float nx, float ny){
    setX(nx);
    setY(ny);
}

float Ponto::getX(){
    return x;
}

float Ponto::getY(){
    return y;
}

void Ponto::add(Ponto p1){
    x = x + p1.x;
    y = y + p1.y;
}

void Ponto::sub(Ponto p1){
    x = x - p1.x;
    y = y - p1.y;
}

float Ponto::norma(){
    float n=0;
    n = sqrt(pow(x,2)+pow(y,2));
    return n;
}

void Ponto::translada(float a, float b){
    x = x + a;
    y = y + b;
}

void Ponto::imprime(){
    cout << "( x = "<<x<<", y = "<<y<<")";
}
