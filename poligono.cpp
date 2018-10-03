#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

 void Poligono::setVertices(int nVertices)
{
    nVertices = 0;
}

void Poligono::setVetPol(int i, float x, float y){

    for(i=0; i<nVertices; i++){
        cout << "Coordenada x do vertice " << i << ": ";
        cin >>  x;
                vertice[i].setX(x);
        cout << "Coordenada y do vertice " << i << ": ";
        cin >>  y;
                vertice[i].setY(y);
    }
}

int Poligono::numVetPol(void){
    return nVertices;
}

float Poligono::calcAreaPol(void){
    float soma1=0, soma2=0;

    for(int i=nVertices; i>0; i--){
        if(i==1){
            soma1 += vertice[1].getX()*vertice[nVertices].getY();
            break;
        }
        soma1 += vertice[i].getX()*vertice[i-1].getY();
    }

    for(int i=nVertices; i>0; i--){
        if(i==1){
            soma2 += vertice[1].getY()*vertice[nVertices].getX();
            break;
        }
        soma2 += vertice[i].getY()*vertice[i-1].getX();
    }

    return (soma1-soma2)/2;
}

void Poligono::transladaPol(float a, float b){

    for(int i=0; i<nVertices; i++){
        vertice[i].setX(vertice[i].getX()+a);
        vertice[i].setY(vertice[i].getY()+b);
    }
}

void Poligono::rotacionarPol(float angulo, float a, float b){
    //não sei fazer
}

void Poligono::imprimePol(){

    for(int i=0; i<nVertices; i++){
        cout << "(" << vertice[i].getX() << ";" << vertice[i].getY() << ") -> ";
    }
}
