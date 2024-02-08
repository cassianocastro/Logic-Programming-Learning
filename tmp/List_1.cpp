#include "../src/includes/List_1.hpp"

using std::cin, std::cout, std::clog;

/**
 *
 */
int main(void)
{
    std::setlocale(LC_ALL, "");

    unsigned int option { 0 };

    while ( true )
	{
        cout <<
            "\nEscolha a opção:"
            "\n0. Sair"
            "\n1. Exercício nº 01"
            "\n2. Exercício nº 02"
            "\n3. Exercício nº 03"
            "\n4. Exercício nº 04"
            "\n5. Exercício nº 05"
            "\n6. Exercício nº 06"
            "\n7. Exercício nº 07"
            "\n8. Exercício nº 08"
            "\n9. Exercício nº 09"
            "\n10.Exercício nº 10"
            "\nOpção\? "
        ;
        cin >> option;

        system("clear");

        switch ( option )
		{
            case EXERCICIO1:
                exercicio1();
                break;
            case EXERCICIO2:
                exercicio2();
                break;
            case EXERCICIO3:
                exercicio3();
                break;
            case EXERCICIO4:
                exercicio4();
                break;
            case EXERCICIO5:
                exercicio5();
                break;
            case EXERCICIO6:
                exercicio6();
                break;
            case EXERCICIO7:
                exercicio7();
                break;
            case EXERCICIO8:
                exercicio8();
                break;
            case EXERCICIO9:
                exercicio9();
                break;
            case EXERCICIO10:
                exercicio10();
                break;
            case SAIR:
                exit(EXIT_SUCCESS);
                break;
            default:
                clog << "Opção inválida!\n";
        }
    }

    return EXIT_SUCCESS;
}

void exercicio1(void)
{
    float dollarExchangeRate { 0.0f }, real { 0.0f };

    cout << "Cotação do dólar: ";
    cin >> dollarExchangeRate;

    cout << "Valor em Reais: ";
    cin >> real;

    cout << "O valor em dólares é: U$ " << std::setprecision(4) << real / dollarExchangeRate;
}

void exercicio2(void)
{
    float celsius { 0.0f };

    cout << "Temperatura em Graus Celsius: ";
    cin >> celsius;

    cout
		<< "A temperatura em..."
        << "\nGraus Farenheit..: " << std::setprecision(4) << celsius * 1.8 + 32
        << "\nGraus Kelvin.....: " << std::setprecision(4) << celsius + 273.15
        << '\n'
	;
}

void exercicio3(void)
{
    float value { 0.0f };

    cout << "Valor da Compra: ";
    cin >> value;

    char sex { '\0' };

    do {
        cout << "Sexo: ";
        cin >> sex;

        sex = std::tolower(sex);
    } while ( sex not_eq 'm' and sex not_eq 'f' );

    float discount = ( sex == 'm' ) ? value * 0.1 : value * 0.15;

    cout
		<< "\nValor Bruto......: R$ " << std::setprecision(4) << value
        << "\nDesconto.........: R$ " << std::setprecision(4) << discount
        << "\nValor Líquido....: R$ " << std::setprecision(4) << value - discount
        << '\n'
	;
}

void exercicio4(void)
{
    float value { 0.0f };

    cout << "Valor: ";
    cin >> value;

    if ( value < 100.0f )
    {
        float discount = value * 0.05f;

        cout
			<< "\nValor Bruto......: R$ " << std::setprecision(4) << value
            << "\nDesconto.........: R$ " << std::setprecision(4) << discount
            << "\nValor Líquido....: R$ " << std::setprecision(4) << value - discount
            << '\n'
		;
    }
    else
    {
        float addition = value * 0.07f;

        cout
			<< "\nValor Bruto......: R$ " << std::setprecision(4) << value
            << "\nAcréscimo........: R$ " << std::setprecision(4) << addition
            << "\nValor Líquido....: R$ " << std::setprecision(4) << value + addition
            << '\n'
		;
    }
}

void exercicio5(void)
{
    Byte serie { 0 };

    cout << "Informe a série: ";
    cin >> serie;

    if ( serie >= 1 and serie <= 4 )
    {
        cout << "Turno da Manhã.\n";
    }
    else if ( serie >= 5 and serie <= 8 )
    {
        cout << "Turno da Tarde.\n";
    }
    else
    {
        clog << "Dígito inválido.\n";
    }
}

void exercicio6(void)
{
    float primeiro_valor = 0.0f, segundo_valor  = 0.0f, terceiro_valor = 0.0f;
    float soma = 0.0f, desconto = 0.0f, valor_liquido = 0.0f;

    printf("Primeiro Valor: ");
    scanf("%f", &primeiro_valor);

    printf("Segundo Valor: ");
    scanf("%f", &segundo_valor);

    printf("Terceiro Valor: ");
    scanf("%f", &terceiro_valor);

    soma = primeiro_valor + segundo_valor + terceiro_valor;

    desconto = ( soma > 1000 ) ? soma * 0.1 : soma * 0.08;

    valor_liquido = soma - desconto;

    printf(
		"\nValor Bruto......: R$ %.2f"
        "\nValor Líquido....: R$ %.2f"
        "\nDesconto.........: R$ %.2f",
        soma,
        valor_liquido,
        desconto
	);
}

void exercicio7(void)
{
    float valor1 = 0.0f, valor2 = 0.0f, valor3 = 0.0f, valor4 = 0.0f, valor_liquido = 0.0f;

    printf("Primeiro valor: ");
    scanf("%f", &valor1);

    printf("Segundo valor: ");
    scanf("%f", &valor2);

    printf("Terceiro valor: ");
    scanf("%f", &valor3);

    printf("Quarto valor: ");
    scanf("%f", &valor4);

    float soma1 = valor1 + valor2;
    float soma2 = valor3 + valor4;
    float total = soma1  + soma2;

    if ( soma1 > soma2 )
    {
        float desconto = total * 0.2;
        valor_liquido  = total - desconto;

        printf(
			"\nSoma dos 2 primeiros valores..: R$ %.2f"
            "\nSoma dos 2 últimos valores....: R$ %.2f"
            "\nValor Bruto...................: R$ %.2f"
            "\nValor Líquido.................: R$ %.2f"
            "\nDesconto......................: R$ %.2f",
            soma1, soma2, total, valor_liquido, desconto
		);
    }
    else
    {
        float acrescimo = total * 0.2;
        valor_liquido   = total + acrescimo;

        printf(
			"\nSoma dos 2 primeiros valores..: R$ %.2f"
            "\nSoma dos 2 últimos valores....: R$ %.2f"
            "\nValor Bruto...................: R$ %.2f"
            "\nValor Líquido.................: R$ %.2f"
            "\nAcréscimo.....................: R$ %.2f",
            soma1, soma2, total, valor_liquido, acrescimo
		);
    }
}

void exercicio8(void)
{
    Byte vetor[5] = {0, 0, 0, 0, 0}, maior_numero = 0;

    for ( Byte indice = 0; indice < 5; indice++ )
	{
        printf("Valor: ");
        scanf("%hhu", &vetor[indice]);

        if ( vetor[indice] > maior_numero )
        {
            maior_numero = vetor[indice];
        }
    }

    printf("O maior número informado foi: %hhu", maior_numero);
}

void exercicio9(void)
{
    Byte vetor[5] = { 0, 0, 0, 0, 0 };
    Byte maior_numero = 0, menor_numero = 0;

    for ( Byte indice = 0; indice < 5; indice++ )
	{
        printf("Valor número %hhu: ", ( indice + 1 ));
        scanf("%hhu", &vetor[indice]);

        if ( vetor[indice] > maior_numero )
        {
            maior_numero = vetor[indice];
        }

        if ( vetor[indice] < menor_numero )
        {
            menor_numero = vetor[indice];
        }
    }

    printf(
		"O maior número informado foi: %hhu\n"
        "O menor número foi: %hhu",
        maior_numero,
        menor_numero
	);
}

void exercicio10(void)
{
    Byte vetor[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    Byte contador_Pares = 0, contador_Impares = 0;

    for ( Byte indice = 0; indice < 10; indice++ )
	{
        printf("Valor número %hhu: ", ( indice + 1 ));
        scanf("%hhu", &vetor[indice]);

        ( vetor[indice] % 2 == 0 ) ? contador_Pares++ : contador_Impares++;
    }

    printf(
		"Quantidade de números..."
        "\nPares......: %hhu"
        "\nÍmpares....: %hhu",
        contador_Pares,
        contador_Impares
	);
}