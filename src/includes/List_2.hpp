#ifndef LIST_2_HPP

#define LIST_2_HPP

#include <array>
#include <functional>
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <utility>

/**
 *
 */
void exercicio01(void);

/**
 *
 */
void exercicio02(void);

/**
 * Escreva um programa que leia um número que é o código do empregado, em seguida,
 * de acordo com a tabela abaixo, escreva a função ao qual o código corresponde.
 * Caso algum código for digitado fora dos especificados na tabela abaixo,
 * o programa deve informar que o código digitado é inválido.
 *
 * O programa deverá ser finalizado quando for digitado o código 0 (zero).
 *
 * | Código | Função |
 * |:------:|:------:|
 * | 1      | Gerente |
 * | 2      | Supervisor |
 * | 3      | Contador |
 * | 4      | Digitador |
 * | 5      | Auxiliar administrativo |
 */
void exercicio03(void);

/**
 * Faça um programa que leia um número de classificação do piloto de fórmula 1
 * e escreva na tela as mensagens de acordo com a tabela abaixo.
 *
 * O programa deverá ser finalizado quando for digitado 0 (zero)
 * no campo de classificação.
 *
 * | Colocação no grid de largada | Mensagens |
 * | :--------------------------: | :-------: |
 * | 1 ou 2      | Primeira fila |
 * | 3 ou 4      | Segunda fila |
 * | 5 ou 6      | Terceira Fila |
 * | 7 ou 8      | Quarta Fila |
 * | 9 ou 10     | Quinta Fila |
 * | Acima de 10 | Sexta Fila em diante |
 */
void exercicio04(void);

/**
 * Escreva um programa que faça as seguintes ações:
 * - Será lido o sexo e a idade da pessoa.
 * - Se o sexo digitado foi diferente de feminino ou masculino,
 * escreva a mensagem “opção inválida”. A exceção é a letra “s”,
 * que será indicada para término do programa.
 *
 * - Se o sexo for feminino E idade maior ou igual a 18 anos,
 * escreva a mensagem “Pode ter um automóvel rosa”.
 *
 * - Se o sexo for feminino E idade menor que 18 anos,
 * escreva a mensagem “Pode ter uma bicicleta rosa”.
 *
 * - Se o sexo for masculino E idade maior ou igual a 18 anos,
 * escreva a mensagem “Pode ter um automóvel azul”.
 *
 * - Se o sexo for masculino E idade menor que 18 anos,
 * escreva a mensagem “Pode ter uma bicicleta azul”.
 *
 * O programa deverá ser finalizado quando no campo sexo for digitado “s”.
 */
void exercicio05(void);

/**
 * Faça um programa que receba a altura e o sexo de uma pessoa, calcule e
 * exiba o seu peso ideal, utilizando as seguintes fórmulas:
 *
 * - Para homens: (72.7 * altura) - 58
 *
 * - Para Mulheres: (62.1 * altura) - 44.7
 *
 * O programa deverá oferecer um opção para continuar ou finalizar
 * digitando alguma letra ou número.
 */
void exercicio06(void);

/**
 * Escreva um programa que exiba as seguintes opções:
 *
 * - Soma
 * - Subtração
 * - Multiplicação
 * - Divisão
 *
 * Em seguida, leia dois números e, de acordo com a opção selecionada,
 * realize a operação desejada e exiba o resultado.
 *
 * O sistema é finalizado quando for escolhida a opção 0(zero).
 *
 * Código maior que 4 deverá ser informado “Código inválido”.
 *
 * O sistema não deve permitir divisão por zero.
 */
void exercicio07(void);

/**
 * Faça um programa que receba a idade de um nadador e
 * exiba a sua categoria seguindo as regras abaixo:
 *
 * | Idade              | Categoria   |
 * | :----------------: | :---------: |
 * | 5 – 7 anos         | Infantil A  |
 * | 8 – 10 anos        | Infantil B  |
 * | 11 – 13 anos       | Juvenil A   |
 * | 14 – 17 anos       | Juvenil B   |
 * | Maiores de 18 anos | Sênior      |
 *
 * Ao digitar idade de 1 a 4, o programa deverá informar “Idade insuficiente”.
 *
 * O programa é finalizado quando for digitada idade 0.
 *
 * O sistema não permitirá digitação de idade negativa (menor que zero).
 */
void exercicio08(void);

/**
 * Uma companhia de seguros tem três categorias de seguros baseadas na
 * idade e ocupação do segurado.
 * Somente pessoas com pelo menos 18 e não mais que 70 anos
 * podem adquirir apólices de seguro.
 *
 * Quanto às classes de ocupações, foram definidos 3 grupos de risco.
 * A tabela a seguir fornece as categorias em função da faixa de idade e
 * do grupo de risco:
 *
 * | Idade   | Grupo de risco       |
 * | :-----: | :------------------: |
 * |         | Baixo | Médio | Alto |
 * |         | ----- | ----- | ---- |
 * | 18 a 24 | 7     | 8     | 9    |
 * | 25 a 40 | 4     | 5     | 6    |
 * | 41 a 70 | 1     | 2     | 3    |
 *
 * **Exemplo**: Ao digitar a idade 28 e o código 5, escreva Grupo Médio, todavia,
 * se for digitado idade 28 e código 8, escreva código inválido.
 */
void exercicio09(void);

/**
 * Faça um programa que determine os meses e as estações do ano aos quais os
 * mesmos pertencem, de acordo com a tabela abaixo:
 *
 * - Outono : De 21 de março a 21 de junho
 *
 * - Inverno: De 21 de junho a 23 de setembro
 *
 * - Primavera: De 23 de setembro a 21 de dezembro.
 *
 * - Verão: De 21 de dezembro a 21 de março.
 *
 * | Meses         | Estação |
 * | :-----------: | :-----: |
 * | 3, 4, 5, 6    | Outono |
 * | 6, 7, 8, 9    | Inverno |
 * | 9, 10, 11, 12 | Primavera |
 * | 12, 1, 2, 3   | Verão |
 *
 * Observando a tabela acima verificamos que nos meses 3, 6, 9 e 12
 * há a mudança de estação, portanto, para saber a estação,
 * é necessário que se digite o dia.
 *
 * Se o dia for menor que 21 nos meses 3, 6 e 12 então a estação não muda,
 * após essa data deverá ser indicada a próxima estação.
 *
 * No mês 9 a mudança ocorre no dia 23.
 */
void exercicio10(void);

#endif