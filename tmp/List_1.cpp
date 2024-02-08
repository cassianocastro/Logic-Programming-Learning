#include "../src/includes/List_1.hpp"

using std::cin, std::cout, std::clog;

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
    float x { 0.0f }, y { 0.0f }, z { 0.0f };

    cout << "Primeiro Valor: ";
    cin >> x;

    cout << "Segundo Valor: ";
    cin >> y;

    cout << "Terceiro Valor: ";
    cin >> z;

    float sum = x + y + z;

    float discount = ( sum > 1000 ) ? sum * 0.1f : sum * 0.08f;

    cout
		<< "\nValor Bruto......: R$ " << std::setprecision(4) << sum
        << "\nDesconto.........: R$ " << std::setprecision(4) << discount
        << "\nValor Líquido....: R$ " << std::setprecision(4) << sum - discount
        << '\n'
	;
}

void exercicio7(void)
{
    float x { 0.0f }, y { 0.0f }, a { 0.0f }, b { 0.0f };

    cout << "Primeiro valor: ";
    cin >> x;

    cout << "Segundo valor: ";
    cin >> y;

    cout << "Terceiro valor: ";
    cin >> a;

    cout << "Quarto valor: ";
    cin >> b;

    float sum1 = x + y;
    float sum2 = a + b;

    float total = sum1 + sum2;

    if ( sum1 > sum2 )
    {
        float discount = total * 0.2f;

        cout
			<< "\nSoma dos 2 primeiros valores..: R$ " << sum1
            << "\nSoma dos 2 últimos valores....: R$ " << sum2
            << "\nValor Bruto...................: R$ " << total
            << "\nDesconto......................: R$ " << discount
            << "\nValor Líquido.................: R$ " << total - discount
            << '\n'
		;
    }
    else
    {
        float addition = total * 0.2f;

        cout
			<< "\nSoma dos 2 primeiros valores..: R$ " << sum1
            << "\nSoma dos 2 últimos valores....: R$ " << sum2
            << "\nValor Bruto...................: R$ " << total
            << "\nAcréscimo.....................: R$ " << addition
            << "\nValor Líquido.................: R$ " << total + addition
            << '\n'
		;
    }
}

void exercicio8(void)
{
    std::array<int, 5> array {};

    int biggest { 0 };

    for ( int i { 0 }, size { array.size() }; i < size; ++i )
	{
        cout << "Valor: ";
        cin >> array[i];

        if ( array[i] > biggest )
        {
            biggest = array[i];
        }
    }

    cout << "O maior número informado foi: " << biggest << '\n';
}

void exercicio9(void)
{
    std::array<int, 5> array {};

    int biggest { 0 }, smallest { 0 };

    for ( int i { 0 }, size { array.size() }; i < size; ++i )
	{
        cout << "Valor número " << i + 1 << ": ";
        cin >> array[i];

        if ( i == 0 )
        {
            smallest = array[i];
        }

        if ( array[i] > biggest )
        {
            biggest = array[i];
        }

        if ( array[i] < smallest )
        {
            smallest = array[i];
        }
    }

    cout
		<< "\nMaior número: " << biggest
        << "\nMenor número: " << smallest
        << '\n'
	;
}

void exercicio10(void)
{
    std::array<int, 10> array {};

    int even { 0 }, odd { 0 };

    for ( int i { 0 }, size { array.size() }; i < size; ++i )
	{
        cout << "Valor número " << i + 1 << ": ";
        cin >> array[i];

        ( array[i] % 2 == 0 ) ? ++even : ++odd;
    }

    cout
		<< "Quantidade de números..."
        << "\nPares......: " << even
        << "\nÍmpares....: " << odd
        << '\n'
	;
}