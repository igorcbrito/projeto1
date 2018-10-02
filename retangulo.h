#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/* @brief A classe retângulo estabelece um retângulo a partir das informações da classe poligono
 * @details A classe retângulo possui como parâmetros os pontos iniciais do vértice superior esquerdo
 * do retângulo. Possui também as dimensões do retângulo.
 * @param x Localização onde o vértice superior esquerdo do retângulo está localizado no eixo x.
 * @param y Localização onde o vértice superior esquerdo do retângulo está localizado no eixo y.
 * @param largura É a medida da largura do retângulo.
 * @param altura É a medida da altura do retângulo.
 */
class Retangulo : public  Poligono
{
    float x, y, largura, altura;

public:
    /* @brief Contrutor da classe retângulo
     *@details Possui parâmetros definidos pelo usuário.
     */
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
