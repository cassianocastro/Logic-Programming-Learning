#include <array>
#include <functional>
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <utility>

using std::cin, std::cout, std::cerr;

void exercicio01(void)
{
	int x { 0 }, y { 0 };

    cout << "Digite um número: ";
	cin >> x;

    cout << "Outro número: ";
	cin >> y;

	if ( x > y )
    {
        cout << "O primeiro número é o maior e é " << ( x % y == 0 ) ? "par" : "ímpar";
    }
	else
    {
        cout << "O segundo número é o maior e é " << ( y % 2 == 0 ) ? "par" : "ímpar";
    }

    cout << '\n';
}

void exercicio03(void)
{
    std::array<std::string, 5> offices = { "Gerente", "Supervisor", "Contador", "Digitador", "Auxiliar Administrativo" };

	int code { 0 };

    while ( true )
    {
        cout << "Informe o código do funcionário: ";
        cin >> code;

        if ( code == 0 )
        {
			break;
        }

		if ( code >= 1 and code <= 5 )
        {
			cout << "Cargo selecionado: " << offices.at(code - 1);
        }
		else
        {
			cout << "Dígito inválido!";
        }
    }
}

void exercicio04(void)
{
    int number { 0 };

	while ( true )
    {
        cout << "Informe o número de classificação: ";
		cin >> number;

		if ( number == 0 )
        {
			return;
        }

        switch ( number )
        {
            case 1:
            case 2:
                cout << "Primeira fila\n";
                break;
            case 3:
            case 4:
                cout << "Segunda fila\n";
                break;
            case 5:
            case 6:
                cout << "Terceira fila\n";
                break;
            case 7:
            case 8:
                cout << "Quarta fila\n";
                break;
            case 9:
            case 10:
                cout << "Quinta fila\n";
                break;
            default:
                cout << "Sexta fila em diante\n";
        }
    }
}

void exercicio05(void)
{
    char sex { '\0' };

	while ( true )
    {
        cout << "Informe seu sexo ou tecle <s> para sair: ";
		cin >> sex;

        sex = std::toupper(sex);

		while ( sex not_eq 'F' and sex not_eq 'M' and sex not_eq 'S' )
        {
            cout << "Opção inválida. Digite novamente: ";
            cin >> sex;

			sex = std::toupper(sex);
        }

		if ( sex == 'S' )
        {
            return;
        }

        int age { 0 };

        cout << "Idade: ";
        cin >> age;

        if ( age >= 18 )
            cout << "Pode ter um automóvel " << ( sex == 'F' ) ? "rosa" : "azul";
        else
            cout << "Pode ter uma bicicleta " << ( sex == 'F' ) ? "rosa" : "azul";
    }
}

void exercicio06(void)
{
	char option { 's' }, sex { '\0' };

    float altura { 0.0f }, peso { 0.0f };

	while ( option == 's' )
    {
        cout << "Informe sua altura: ";
		cin >> altura;

        cout << "Seu sexo: ";
        cin >> sex;

		sex = std::toupper(sex);

		while ( sex not_eq 'M' and sex not_eq 'F' )
        {
            cout << "Sexo inválido. Digite novamente: ";
			cin >> sex;

            sex = std::toupper(sex);
        }

		if ( sex == 'M' )
			peso = (72.7 * altura) - 58;
		else
			peso = (62.1 * altura) - 44.7;

        cout << "Seu peso ideal é de: " << std::setprecision(4) << peso << " Kg\n";

        cout << "Deseja realizar novamente [s/n]\? ";
        cin >> option;

		option = std::tolower(option);

		while ( option not_eq 's' and not option not_eq 'n' )
        {
            cout << "Opção inválida. Digite novamente: ";
            cin >> option;

			option = std::tolower(option);
        }
    }
}

void exercicio07(void)
{
    std::map<int, std::function<int (int, int)>> options =
    {
        std::pair<int, std::function<int (int, int)>>(1, [](int x, int y){ return x + y; }),

        std::pair<int, std::function<int (int, int)>>(2, [](int x, int y){ return x - y; }),

        std::pair<int, std::function<int (int, int)>>(3, [](int x, int y){ return x * y; }),

        std::pair<int, std::function<int (int, int)>>(4, [](int x, int y){
            if ( y == 0 )
            {
                throw std::runtime_error("Error: division by 0");
            }

            return x / y;
        })
    };

    int option { 0 }, x { 0 }, y { 0 };

	while ( true )
    {
        cout <<
			"\nEscolha uma das opções abaixo:"
			"\n1. Soma | 2. Subtração | 3. Multiplicação | 4. Divisão"
			"\nOpção\? "
		;
		cin >> option;

		while ( option > 4 )
        {
            cout << "Opção inválida. Digite novamente: ";
            cin >> option;
        }

		if ( option == 0 )
        {
            break;
        }

        cout << "Primeiro Número: ";
        cin >> x;

        cout << "Segundo Número: ";
        cin >> y;

        try
        {
            auto result = options.at(option)(x, y);

            cout << "Resultado: " << std::setprecision(4) << result << '\n';
        }
        catch ( const std::runtime_error& e )
        {
            cerr << e.what() << '\n';
        }
    }
}

void exercicio08(void)
{
    int idade { 0 };

	while ( true )
    {
        cout << "Informe a idade o nadador ou <0> para sair: ";
		cin >> idade;

		while ( idade < 0 )
        {
            cout << "Idade inválida. Digite novamente: ";
			cin >> idade;
        }

		if ( idade == 0 )
        {
            break;
        }

        if ( idade >= 1 and idade <= 4 )
        {
            cout << "Idade insuficiente.\n";
        }
        else if ( idade >= 5 and idade <= 7 )
        {
            cout << "Infantil A.\n";
        }
        else if ( idade >= 8 and idade <= 10 )
        {
            cout << "Infantil B.\n";
        }
        else if ( idade >= 11 and idade <= 13 )
        {
            cout << "Juvenil A.\n";
        }
        else if ( idade >= 14 and idade <= 17 )
        {
            cout << "Juvenil B.\n";
        }
        else
        {
            cout << "Sênior.\n";
        }
    }
}

void exercicio09(void)
{
    int codigo { 0 }, idade { 0 };

    cout << "Idade: ";
	cin >> idade;

    cout << "Código: ";
	cin >> codigo;

	while ( idade < 18 and idade > 70 )
    {
        cout << "Dígito inválido. Digite novamente: ";
		cin >> idade;
    }

	if ( idade >= 18 and idade <= 24 )
    {
		if ( codigo < 7 or codigo > 9 )
        {
			cout << "Código inválido.";
        }
		else
        {
			if ( codigo == 7 )
				cout << "Grupo Baixo.";
			else if ( codigo == 8 )
				cout << "Grupo Médio.";
			else
				cout << "Grupo Alto.";
        }
    }
	else if ( idade >= 25 and idade <= 40 )
    {
		if ( codigo < 4 or codigo > 6 )
        {
			cout << "Código inválido.";
        }
		else
        {
			if ( codigo == 4 )
				cout << "Grupo Baixo.";
			else if ( codigo == 5 )
				cout << "Grupo Médio.";
			else
				cout << "Grupo Alto.";
        }
    }
	else
    {
		if ( codigo < 1 or codigo > 3 )
        {
			cout << "Código inválido.";
        }
		else
        {
			if ( codigo == 1 )
				cout << "Grupo Baixo.";
			else if ( codigo == 2 )
				cout << "Grupo Médio.";
			else
				cout << "Grupo Alto.";
        }
    }
}

void exercicio010(void)
{
	int month { 0 };

    cout << "Mês: ";
    cin >> month;

	while ( month < 1 or month > 12 )
    {
        cout << "Mês: ";
		cin >> month;
    }

	if ( month == 1 or month == 2 )
		cout << "Verão.";
	else if ( month == 4 or month == 5 )
		cout << "Outono.";
	else if ( month == 7 or month == 8 )
		cout << "Inverno.";
	else if ( month == 10 or month == 11 )
		cout << "Primavera.";
	else
    {
		int day { 0 };

        cout << "Dia: ";
        cin >> day;

		if ( month == 3 )
			cout << ( day < 21 ) ? "Verão" : "Outono";
		else if ( month == 6 )
			cout << ( day < 21 ) ? "Outono" : "Inverno";
		else if ( month == 9 )
			cout << ( day < 23 ) ? "Inverno" : "Primavera";
		else
			cout << ( day < 21 ) ? "Primavera" : "Verão";
    }
}