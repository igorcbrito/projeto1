#include "poligono.h"
#include <iostream>
#include <cmath>
#define MAX_TAM 100

using namespace std;

/*Poligono::Poligono(){
    nVertices=0;
}*/

void Poligono::setVetPol(int i, float x, float y){

    if(nVertices >= 100){
        cout << "Quantidade maxima de vertices atingida\n";
        exit(0);
    }

    nVertices++;

    vertice[nVertices-1].setX(x);
    vertice[nVertices-1].setY(y);
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

    return (soma2-soma1)/2;
}

void Poligono::transladaPol(float a, float b){

    for(int i=0; i<nVertices; i++){
        vertice[i].setX(vertice[i].getX()+a);
        vertice[i].setY(vertice[i].getY()+b);
    }
}

void Poligono::rotacionarPol(float angulo, float a, float b){
    angulo*=(M_PI/180.0);
    for(int j=0; j<nVertices;j++){
        vertice[j].translada(-a,-b);
    }

    for(int j=0; j<nVertices; j++){
        vertice[j].setXY(vertice[j].getX()*cos(angulo)-vertice[j].getY()*sin(angulo), vertice[j].getX()*sin(angulo)+vertice[j].getY()*cos(angulo));
    }

    for(int j=0; j<nVertices; j++){
        vertice[j].translada(a,b);
    }


}

void Poligono::imprimePol(){

    for(int i=0; i<nVertices; i++){
        cout << "(" << vertice[i].getX() << ";" << vertice[i].getY() << ") -> ";
    }
}
