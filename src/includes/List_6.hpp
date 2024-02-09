#ifndef LIST_6_HPP

#define LIST_6_HPP

/**
 * @see file://./../../assets/Lista_6.pdf
 */
namespace List_6
{

    /**
     * Faça um programa que leia uma matriz 4 x 4 com números inteiros,
     * em seguida, escreva a matriz resultante em forma de tabela 4 x 4,
     * conforme exemplo abaixo:
     *
     * | 0 | 1 | 2 | 3 |
     * |:---:|:---:|:---:|:---:|
     * | 1 | 3 | 4 | 7 |
     * | 5 | 2 | 9 | 8 |
     * | 6 | 0 | 2 | 5 |
     * | 7 | 6 | 2 | 1 |
     */
    void exercise01(void);

    /**
     * Faça um programa que preencha uma matriz 5 x 5 com
     * números inteiros aleatórios, no intervalo entre 0 e 100.
     *
     * Em seguida, escreva a matriz resultante em forma de tabela 5 x 5.
     */
    void exercise02(void);

    /**
     * Faça uma programa que preencha uma matriz 5 x 5 com números de 10 a 34,
     * conforme exemplo abaixo:
     *
     * | 0 | 1 | 2 | 3 | 4 |
     * |:---:|:---:|:---:|:---:|:---:|
     * | 10 | 11 | 12 | 13 | 14 |
     * | 15 | 16 | 17 | 18 | 19 |
     * | 20 | 21 | 22 | 23 | 24 |
     * | 25 | 26 | 27 | 28 | 29 |
     * | 30 | 31 | 32 | 33 | 34 |
     */
    void exercise03(void);

    /**
     * Faça um programa que gere uma matriz 4 x 4 com números inteiros
     * aleatórios entre 0 e 100, em seguida mostre:
     *
     * - A soma dos valores digitados na matriz
     * - A média dos números digitados na matriz
     */
    void exercise04(void);

    /**
     * Faça um programa que gere uma matriz 4 x 4 com números inteiros
     * aleatórios entre 0 e 100, em seguida mostre:
     *
     * - O maior elemento da matriz e sua respectiva posição,
     * ou seja, linha e coluna.
     *
     * - O menor elemento da matriz e sua respectiva posição,
     * ou seja, linha e coluna.
     *
     * Caso o maior ou o menor número estiverem presentes repetidas vezes na
     * matriz, o sistema deverá informar a posição do primeiro maior ou
     * do primeiro menor encontrados.
     */
    void exercise05(void);

    /**
     * Faça um programa que gere uma matriz 4 x 4 com números inteiros
     * aleatórios entre 0 e 100, todavia, a matriz será preenchida seguindo
     * a seguinte norma:
     *
     * - A primeira e a terceira linha receberão somente números pares
     *
     * - A segunda e a quarta linhas receberão somente números impares
     */
    void exercise06(void);

    /**
     * Faça um programa que carregue uma matriz 5 x 5 preenchida com números
     * pares de 2 a 50 e escreva a matriz resultante(original).
     *
     * Em seguida, divida cada número por 2 e armazene o resultado na mesma posição
     * do número que foi dividido, escrevendo a matriz modificada(resultante).
     *
     * Matriz Original:
     *
     * | 0 | 1 | 2 | 3 | 4 |
     * |:---:|:---:|:---:|:---:|:---:|
     * | 2  | 4  | 6  | 8  | 10 |
     * | 12 | 14 | 16 | 18 | 20 |
     * | 22 | 24 | 26 | 28 | 30 |
     * | 32 | 34 | 36 | 38 | 40 |
     * | 42 | 44 | 46 | 48 | 50 |
     *
     * Matriz resultante:
     *
     * | 0 | 1 | 2 | 3 | 4 |
     * |:---:|:---:|:---:|:---:|:---:|
     * | 1  | 2  | 3  | 4  | 5 |
     * | 6 | 7 | 8 | 9 | 10 |
     * | 11 | 12 | 13 | 14 | 15 |
     * | 16 | 17 | 18 | 19 | 20 |
     * | 21 | 22 | 23 | 24 | 25 |
     */
    void exercise07(void);

    /**
     * Faça um programa que carregue uma matriz 5 x 5 com números inteiros
     * preenchidos de 1 a 25 e exiba a matriz gerada.
     *
     * Em seguida, calcule e mostre a soma:
     *
     * - Dos elementos da linha 4
     * - Dos elementos da coluna 2
     * - Dos elementos da diagonal principal(representada em verde)
     * - Dos elementos da diagonal secundária(representada em amarelo)
     * - De todos os elementos da matriz
     */
    void exercise08(void);

    /**
     * Faça um programa que carregue uma matriz 3 x 3 somente com números
     * primos gerados de forma aleatória no intervalo de 0 à 100.
     *
     * Escrever a matriz gerada.
     */
    void exercise09(void);

    /**
     * Os proprietários de um teatro que possui 25 lugares necessitam de uma
     * ferramenta de software para reservas de lugares.
     *
     * O desenvolvedor contratado verificou que as poltronas disponíveis para
     * reservas são referenciados pelo número da fila (a partir do número 0) e
     * pelo número da cadeira (a partir do número 0) em cada fila,
     * em uma representação matricial em que as linhas e colunas correspondem,
     * respectivamente, às filas e às colunas de cadeiras.
     *
     * Implemente um programa que realize as reservas dos lugares (informando
     * a fila e a cadeira), marcando com a letra “R” os lugares reservados e
     * com “L” os lugares livres no teatro.
     *
     * A cada reserva, mostrar um “mapa” do teatro.
     *
     * Caso a cadeira já tenha sido reservada, exibir uma mensagem ao
     * usuário e solicitar nova posição.
     *
     * Para encerrar as reservas, informar "s".
     */
    void exercise10(void);
}

#endif