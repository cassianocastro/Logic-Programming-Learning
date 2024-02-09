#ifndef LIST_3_HPP

#define LIST_3_HPP

#include <functional>
#include <iostream>
#include <iomanip>
#include <map>

/**
 * @see file://./../../assets/Lista_3.pdf
 */
namespace List_3
{

    /**
     * Em uma empresa os funcionários recebem o salário por hora trabalhada.
     * Para cada hora normal trabalhada, o funcionário recebe R$ 20,00,
     * sendo que para hora extra o valor é de R$ 25,00.
     *
     * Faça um algoritmo que calcule o salário do funcionário de acordo com o
     * número de horas trabalhadas.
     */
    void exercise01(void);

    /**
     * Ao construir uma casa, um engenheiro precisa saber quantos tijolos
     * serão necessários para construir as paredes da casa. Para tanto,
     * o engenheiro faz uma projeção do tamanho das paredes da casa, medidas
     * em metros quadrados, em seguida, calcula a quantidade de tijolos que vai
     * necessitar para a obra.
     *
     * Se utilizar tijolos de 6 furos, utilizará 15 tijolos por metro quadrado,
     * se utilizar tijolos de 4 furos, serão 25 tijolos por metro quadrado,
     * e se forem tijolos maciços, 30 tijolos por metro quadrado.
     *
     * Ajude o engenheiro a calcular a quantidade de tijolos que ele utilizará
     * na obra.
     */
    void exercise02(void);

    /**
     * Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
     * meses e dias e mostre-a expressa apenas em dias.
     *
     * Considere o ano com 365 dias e o mês com 30 dias.
     */
    void exercise03(void);

    /**
     * Faça um algoritmo que leia a idade de uma pessoa expressa em dias
     * e mostre-a expressa em anos, meses e dias.
     *
     * Considere o ano com 365 dias e o mês com 30 dias.
     */
    void exercise04(void);

    /**
     * O cardápio de uma lancheria é o seguinte:
     *
     * | Especificação | Código | Preço |
     * | :-----------: | :----: | :---: |
     * | Cachorro quente | 10 | R$ 2,50 |
     * | Bauru simples | 11 | R$ 6,00 |
     * | Bauru com ovo | 12 | R$ 6,50 |
     * | Hambúrger | 13 | R$ 5,00 |
     * | Cheeseburguer | 14 | R$ 5,50 |
     * | Refrigerante | 15 | R$ 2,00 |
     *
     * Escrever um algoritmo que leia o código do item pedido, a quantidade e
     * calcule o valor a ser pago por aquele lanche.
     *
     * Considere que a cada execução somente será calculado um item.
     *
     * O programa deverá ser finalizado quando, no código do pedido,
     * for informado 0(zero).
     *
     * Qualquer código diferente dos mostrados acima o sistema deverá informar
     * código inválido.
     */
    void exercise05(void);

    /**
     * Uma transportadora calcula o valor que será cobrado pelo frete aplicando um
     * percentual sobre o valor da encomenda de acordo com a distância que deve
     * percorrer até o destino.
     *
     * Faça um programa para determinar o valor do frete de acordo com a tabela
     * abaixo:
     *
     * | Distância do frete | % sobre o valor da encomenda |
     * | :----------------: | :--------------------------: |
     * | Entre 0 e 100 Km | 20,00% |
     * | Entre 101 e 300 Km | 17,00% |
     * | Entre 301 e 500 Km | 15,00% |
     * | Entre 501 e 1000 Km | 13,00% |
     * | Acima de 1000 Km | 10,00% |
     */
    void exercise06(void);

    /**
     * Escrever um algoritmo que lê um valor em reais e calcula o menor número
     * possível de notas de 100, 50, 10, 5 e 1 em que o valor lido possa
     * ser decomposto.
     *
     * Escrever o valor lido e a relação de notas necessárias.
     *
     * Obs.: Considere apenas valores inteiros, os centavos não serão informados.
     */
    void exercise07(void);

    /**
     * Faça um algoritmo que calcule a área de um círculo, ou de um retângulo,
     * ou de um triângulo, de acordo com tabela abaixo, mostrando o resultado.
     *
     * | Opção | Cálculo da área do | Fórmula |
     * | :---: | :----------------: | :-----: |
     * | 1     | retângulo | Base x Altura |
     * | 2     | triângulo | (Base x Altura) / 2 |
     * | 3     | círculo   | π x Raio2 |
     * | 0     | Finalizar o programa | |
     *
     * Obs.: (pi = 3.14). Use π x Raio x Raio
     *
     * O sistema deverá ser finalizado quando for informada opção 0(zero).
     */
    void exercise08(void);

    /**
     * Em um aeroporto o sistema de embarque deve verificar o peso da bagagem e dos
     * passageiros afim de verificar se as normas de segurança da aeronave estão sendo
     * cumpridas, no caso, o peso máximo permitido para decolagem.
     *
     * Faça um algoritmo que leia a capacidade máxima de carga do avião e faça a
     * leitura do peso da bagagem de cada um dos passageiros, além do peso do
     * passageiro.
     *
     * Afim de evita constrangimentos, o peso dos passageiros não será informado,
     * mas o sistema considera que cada passageiro pesa 80 quilos,
     * sendo essa uma média adotada pela companhia fabricante da aeronave.
     *
     * O sistema termina a leitura dos dados se o limite máximo da aeronave for ultrapassado,
     * emitindo um aviso com o total de peso acumulado e o número de passageiros e
     * finalizando a leitura dos dados, ou informando-se o peso da bagagem como 0(zero),
     * indicando que a leitura dos dados dos passageiros foi finalizada, emitindo o total de peso
     * acumulado e o número de passageiros.
     */
    void exercise09(void);

    /**
     * Faça um programa que leia um número. Em seguida,
     * diga se o número é primo ou não.
     */
    void exercise10(void);
}

#endif