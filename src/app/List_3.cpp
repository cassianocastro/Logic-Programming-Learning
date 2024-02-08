#include "../includes/List_3.hpp"

using std::cin, std::cout, std::clog;

void exercicio01()
{
    float hours { 0.0f }, extra { 0.0f };

	cout << "Informe a quantidade de horas trabalhadas: ";
	cin >> hours;

	cout << "Qtde de horas extras: ";
	cin >> extra;

	hours *= 20;
	extra *= 25;

	cout << "Salário total: R$ " << std::setprecision(4) << hours + extra << '\n';
}

void exercicio02()
{
    float metragem { 0.0f }, total { 0.0f };

    cout << "Tamanho da parede(em metros quadrados): ";
	cin >> metragem;

    int tipo { 0 };

    cout <<
        "\nInforme o tipo de Tijolo a ser utilizado:"
        "\n1. 6 furos | 2. 4 furos | 3. Maciços"
        "\nTipo\? "
    ;
	cin >> tipo;

	while ( tipo < 1 or tipo > 3 )
    {
		cout << "Tipo inválido. Somente dígitos de 1 a 3: ";
		cin >> tipo;
    }

	if ( tipo == 1 )
		total = metragem * 15;
	else if ( tipo == 2 )
		total = metragem * 25;
	else
		total = metragem * 30;

	cout << "Total de tijolos necessários: " << std::setprecision(4) << total << " por metro quadrado.\n";
}

void exercicio03()
{
    unsigned int idadeDIA { 0 }, idadeMES { 0 }, idadeANO { 0 };

    cout << "Idade em anos: ";
	cin >> idadeANO;

    cout << "Quantos meses: ";
	cin >> idadeMES;

    cout << "E qtos dias: ";
	cin >> idadeDIA;

	idadeANO *= 365;
	idadeMES *= 30;

	cout << "Total de dias vividos: " << idadeANO + idadeMES + idadeDIA << '\n';
}

void exercicio04()
{
    int idadeDIA { 0 };

    cout << "Idade em dias: ";
	cin >> idadeDIA;

	int anos  = idadeDIA / 365;
	int meses = idadeDIA % 365 / 30;
	int dias  = (idadeDIA % 365) % 30;

	cout
        << "Você tem "
        << anos  << " anos, "
        << meses << " mes(es) e "
        << dias  << " dia(s).\n"
    ;
}

float calcularPreco(int code, int qtde)
{
    if ( code == 10 ) return qtde * 2.5;
    else if ( code == 11 ) return qtde * 6;
    else if ( code == 12 ) return qtde * 6.5;
    else if ( code == 13 ) return qtde * 5;
    else if ( code == 14 ) return qtde * 5.5;
    else return qtde * 2;
}

void exercicio05()
{
    const std::map<int, std::string> products =
    {
        std::pair<int, std::string>(10, "Cachorro Quente"),
        std::pair<int, std::string>(11, "Bauru Simples"),
        std::pair<int, std::string>(12, "Bauru com Ovo"),
        std::pair<int, std::string>(13, "Hambúrguer"),
        std::pair<int, std::string>(14, "Cheeseburguer"),
        std::pair<int, std::string>(15, "Refrigerante")
    };

    int code { 0 };

	while ( true )
    {
        cout << "Código do produto ou <0> para sair: ";
		cin >> code;

		if ( code == 0 )
        {
			break;
        }
		else if ( code < 10 or code > 15 )
        {
			clog << "Código inválido.\n";
        }
		else
        {
            int quantidade { 0 };

            cout << "Quantidade: ";
			cin >> quantidade;

			int preco = calcularPreco(code, quantidade);

			cout
				<< "\nCódigo do Pedido....: " << code
				<< "\nEspecificação.......: " << products.at(code)
				<< "\nQuantidade do item..: " << quantidade
				<< "\nPreço total.........: R$ " << std::setprecision(4) << preco
                << '\n'
			;
        }
    }
}

void exercicio06()
{
	float encomenda { 0.0f }, distance { 0.0f }, frete { 0.0f };

    cout << "Valor da encomenda: ";
	cin >> encomenda;

	cout << "Informe a distância percorrida: ";
	cin >> distance;

	if ( distance > 0 and distance <= 100 )
    {
		frete = encomenda * 0.2;
    }
	else if ( distance >= 101 and distance <= 300 )
    {
		frete = encomenda * 0.17;
    }
	else if ( distance >= 301 and distance <= 500 )
    {
		frete = encomenda * 0.15;
    }
	else if ( distance >= 501 and distance <= 1000 )
    {
		frete = encomenda * 0.13;
    }
	else if ( distance > 1000 )
    {
		frete = encomenda * 0.1;
    }

	cout << "O valor do frete é: R$ " << std::setprecision(4) << frete << '\n';
}

void exercicio07()
{
    int value { 0 }, diferenca { 0 };

    cout << "Valor em R$: ";
	cin >> value;

	int notas100 = value / 100;
	diferenca = value - (notas100 * 100);

	cout << notas100 << "nota(s) de 100 reais.\n";

	int notas50 = diferenca / 50;
	diferenca -= (notas50 * 50);

	cout << notas50 << " nota(s) de 50 reais.\n";

	int notas10 = diferenca / 10;
	diferenca -= (notas10 * 10);

	cout << notas10 << " nota(s) de 10 reais.\n";

	int notas5 = diferenca / 5;
	diferenca -= (notas5 * 5);

	cout << notas5 << " nota(s) de 5 reais.\n";

	int notas1 = diferenca / 1;
	cout << notas1 << " nota(s) de 1 real.\n";
}

void exercicio08()
{
    const std::map<int, std::function<float ()>> options =
    {
        std::pair<int, std::function<float ()>>(1, []()
        {
            float base { 0.0f }, altura { 0.0f };

            cout << "Base: ";
            cin >> base;

            cout << "Altura: ";
            cin >> altura;

            return base * altura;
        }),
        std::pair<int, std::function<float ()>>(2, []()
        {
            float base { 0.0f }, altura { 0.0f };

            cout << "Base: ";
            cin >> base;

            cout << "Altura: ";
            cin >> altura;

		    return base * altura / 2;
        }),
        std::pair<int, std::function<float ()>>(3, []()
        {
		    const float PI = 3.14f;

            float raio { 0.0f };

            cout << "Raio: ";
            cin >> raio;

	    	return PI * raio * raio;
        })
    };

    int option { 0 };

    while ( true )
    {
        cout <<
            "\nCalcular a área do:"
            "\n1. Retângulo | 2. Triângulo | 3. Círculo | 0. Sair"
            "\nOpção\? "
        ;
		cin >> option;

		if ( option == 0 )
        {
			break;
        }

        if ( option < 0 or option > 3 )
        {
            clog << "Opção inválida.\n";
        }
        else
        {
            cout << "O resultado é: " << std::setprecision(4) << options.at(option)() << '\n';
        }
    }
}

void exercicio10()
{
	int dividendo { 0 };
	bool isPrime { true };

    cout << "Número: ";
    cin >> dividendo;

	if ( dividendo > 1 )
    {
		// for ( divisor in range(2, dividendo) )
        // {
		// 	if ( dividendo % divisor == 0 )
        //     {
		// 		isPrime = false;

        //         break;
        //     }
        // }
    }
	else
    {
		isPrime = false;
    }

	cout << ( isPrime ) ? "É primo." : "Não é primo.";
}