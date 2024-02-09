#ifndef LIST_7_HPP

#define LIST_7_HPP

/**
 * @see file://./../../assets/Lista_7.pdf
 */
namespace List_7
{

    /**
     * Faça um programa que carregue uma matriz 6 x 4 com números inteiros.
     *
     * Recalcule a matriz digitada, onde cada linha será multiplicada pelo
     * maior elemento da linha em questão.
     *
     * Mostre a matriz resultante.
     *
     * A matriz será carregada com números aleatórios de 0 à 100.
     *
     * O programa irá ser repetido até que seja digitado 's'.
     */
    void exercise01(void);

    /**
     * Faça um programa que carregue uma matriz 5 x 5 com números inteiros
     * randômicos de 0 à 100, em seguida, crie dois vetores de cinco posições
     * cada um, que contenham, respectivamente, as somas das linhas e das
     * colunas da matriz.
     *
     * Escreva a matriz e os vetores criados.
     */
    void exercise02(void);

    /**
     * Dada uma matriz de números inteiros de dimensão 5 x 5, preenchida de
     * forma randômica de 0 à 100, verificar se existem elementos repetidos.
     */
    void exercise03(void);

    /**
     * Dada uma matriz de números inteiros de dimensão 5 x 5, preenchida de
     * forma randômica de 100 à 300, verificar se existem números que são
     * divisíveis por 3.
     *
     * Escrever os números encontrados.
     */
    void exercise04(void);

    /**
     * Faça um programa que preencha um matriz 10 x 10 com números inteiros de
     * forma randômica no intervalo 0 a 500.
     *
     * Em seguida, o programa solicita que seja informado um número e faz a
     * busca pelo número digitado na matriz.
     *
     * Se o número informado estiver presente na matriz, o programa exibe uma
     * mensagem “Número encontrado” e descreve a quantidade de vezes que o
     * número está repetido, caso contrário, exibe a mensagem “Número não localizado”.
     *
     * O programa deverá finalizar a busca se for digitado um número negativo.
     */
    void exercise05(void);

    /**
     * Faça um programa que preencha um matriz 5 x 5 com números inteiros
     * não repetidos de forma randômica no intervalo de 0 à 500 e escreva a
     * matriz gerada.
     */
    void exercise06(void);

    /**
     * Faça um programa que preencha um matriz 10 x 10 com números inteiros
     * pares não repetidos de forma randômica no intervalo de 0 à 1000 e escreva
     * a matriz gerada.
     */
    void exercise07(void);

    /**
     * Faça um programa que preencha um matriz 5 x 5 preenchida de forma
     * randômica com números de 0 à 100 da seguinte forma:
     *
     * x: números pares
     * y: números primos
     * z: números ímpares
     *
     *
     */
    void exercise08(void);

    /**
     * Faça um programa que preencha um matriz 5 x 5 de forma randômica com
     * números de 0 a 100, em seguida, troque os elementos da 1º linha com os
     * elementos da 1º coluna, os da 2º linha com a 2º coluna, os da 3º linha
     * com a 3º coluna, os da 4º linha com a 4º coluna e os os da 5º linha com
     * a 5º coluna.
     */
    void exercise09(void);

    /**
     * Faça um programa que controle a pontuação de um campeonato de futebol.
     * O número de equipes será definido por uma variável constante, no caso,
     * 5 times disputam o campeonato.
     *
     * Em um vetor de tamanho definido pela constante, (no caso, 5) serão
     * armazenados os nomes dos times.
     *
     * Em uma matriz (definidos na constante, no caso, de dimensão 5x4) é
     * armazenada a pontuação dos jogos (os times jogam entre sí).
     *
     * Cada linha da matriz corresponde a uma posição no vetor, o que faz com
     * que a primeira linha da matriz contenha os pontos dos times da primeira
     * posição do vetor, a segunda linha da matriz corresponde a segunda posição
     * do vetor e assim por diante...
     *
     * O placar de cada jogo será definido de forma aleatória, com, no
     * máximo, 4 gols por equipe.
     *
     * Vitória conta 3 pontos para o vencedor e 0 para o derrotado, empate 1 ponto
     * para cada equipe.
     *
     * Ao final de inserção de dados, o programa deve calcular o número máximo de
     * pontos de cada equipe. Exemplo:
     *
     * Vetor dos times
     *
     * | 0 | 1 | 2 | 3 | 4 |
     * |:---:|:---:|:---:|:---:|:---:|
     * | Inter | Grêmio | Santos | Vasco | Sport |
     *
     * Matriz dos jogos e pontos das equipes
     *
     * |         | Jogo 1 | Jogo 2 | Jogo 3 | Jogo 4 |
     * |:---:    |:---:   |:---:   |:---:   |:---:   |
     * | posição | 0      | 1      | 2      | 3      |
     * | 0 | 3 | 3 | 1 | 1 |
     * | 1 | 0 | 1 | 3 | 1 |
     * | 2 | 0 | 1 | 3 | 1 |
     * | 3 | 1 | 0 | 0 | 0 |
     * | 4 | 1 | 1 | 1 | 3 |
     */
    void exercise10(void);
}

#endif