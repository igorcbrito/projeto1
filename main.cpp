#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main(){

    Retangulo r1(0,0,3,4); //retangulo com primeiro vértice cituado na origem, altura e largura iguais a 3 e 4 respectivamente.

    cout << "Retangulo no (0,0): ";
            r1.imprimePol();

    cout << "\n\nArea do retangulo: " << r1.calcAreaPol() << endl;

    r1.transladaPol(-3, 4);

    cout << "\nArea do retangulo apos transladar: " << r1.calcAreaPol() << endl;

    r1.rotacionarPol(30,2,1.5); // 2 e 1.5 é a localização do centro de massa do retângulo.

    cout << "\nArea do retangulo apos rotacionar: " << r1.calcAreaPol() << endl;

}
