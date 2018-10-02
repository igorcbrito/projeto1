#ifndef PONTO_H
#define PONTO_H

/**
* @brief A classe Ponto é a representação de pontos em um espaço bidimensional
*/
class Ponto{

private:
    float x, y;

public:
    /**
     * @brief Ponto é o construtor da classe Ponto
     * @param x é o parâmetro que define o valor da abscissa(x) de um objeto da classe Ponto
     * @param y é o parâmetro que define o valor da ordenada(y) de um objeto da classe Ponto
     * @details caso algum objeto seja criado sem nenhum valor dado como parâmetro,
     * o objeto será um Ponto de coordenada no centro (0,0)
     */
    Ponto(float nx = 0, float ny = 0);

    /**
     * @brief setX Define, ou altera, o valor da coordenada
     * x de um objeto da classe Ponto
     * @param x é o valor da coordenada x
     */
    void setX(float nx);

    /**
     * @brief setY Define, ou altera, o valor da coordenada
     * y de um objeto da classe Ponto
     * @param y é o valor da coordenada y
     */
    void setY(float ny);

    /**
     * @brief setXY Define, ou altera, em uma mesma função,
     * os valores da coordenadas x e y
     * de um objeto da classe Ponto
     * @param x é o valor da abscissa
     * @param y é o valor da ordenada
     */
    void setXY(float nx, float ny);

    /**
     * @brief getX recupera o valor da coordenada x do ponto
     * @return valor da coordenada x da do ponto
     */
    float getX(void);

    /**
     * @brief getY recupera o valor da coordenada y do ponto
     * @return valor da coordenada y da do ponto
     */
    float getY(void);

    /**
     * @brief add adiciona as coordenadas (x,y) do ponto com as
     * coordenadas de um ponto P1(x1,y1) fornecido, armazenando
     * o resultado (x+x1,y+y1) nas coordenadas de um novo ponto,
     * que deverá ser retornado para o cliente da classe
     * @param p1 é um objeto do tipo Ponto a ser somado
     */
    void add(Ponto p1);

    /**
     * @brief sub subtrai as coordenadas (x,y) do ponto com as
     * coordenadas de um ponto P1(x1,y1) fornecido, armazenando
     * o resultado (x−x1,y−y1) nas coordenadas de um novo ponto,
     * que deverá ser retornado para o cliente da classe
     * @param p1 é um objeto do tipo Ponto a ser subtraído
     */
    void sub(Ponto p1);

    /**
     * @brief norma calcula a distância do ponto para a origem do
     * sistema de coordenadas
     * @return o valor da norma do ponto.
     */
    float norma(void);

    /**
     * @brief translada o ponto (x,y) de (+a,+b), de modo que, após
     * a execução do método, as coordenadas do ponto serão  (x+a,y+b)
     * @param a é o valor a ser transladado na coordenada x.
     * @param b é o valor a ser transladado na coordenada y.
     */
    void translada(float a, float b);

    /**
     * @brief imprime exibe um objeto da classe Ponto
     */
    void imprime(void);
};

#endif // PONTO_H





#ifndef PONTO_H
