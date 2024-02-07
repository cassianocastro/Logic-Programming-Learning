#include <array>
#include <iostream>
#include <iomanip>
#include <vector>

using std::cin, std::cout;

/**
 * Faça um algoritmo que leia um número, e seguida,
 * informe se o número digitado é divisível por
 * 3 e por 5.
 */
void exercicio01()
{
    int number { 0 };

    cout << "Número: ";
    cin >> number;

    if ( number % 3 == 0 and number % 5 == 0 )
        cout << "É divisível por 3 e 5.\n";
    else
        cout << "Não é divisível por 3 e 5.\n";
}

/**
 * Faça um algoritmo que solicite um numero, em seguida,
 * mostre quantos e quais são seus
 * divisores.
 */
void exercicio02()
{
    std::vector<int> dividers {};

    int number { 0 }, count { 0 };

    cout << "Número: ";
    cin >> number;

    for ( int i { 1 }, size { number + 1 }; i < size; ++i )
    {
        if ( number % i == 0 )
        {
            ++count;

            dividers.push_back(i);
        }
    }

    for ( auto& divisor : dividers )
    {
        cout << divisor << " é divisor de " << number << '\n';
    }

    cout << "Total de divisores encontrados: " << count << '\n';
}

/**
 * Faça um algoritmo que leia um vetor de 10 posições com
 * números inteiros, em seguida, escreva
 * os números na ordem inversa que foram digitados.
 */
void exercicio03()
{
    std::array<int, 10> list = {};

    std::srand(time(nullptr));

    for ( std::size_t i { 0 }, size { list.size() }; i < size; ++i )
    {
        list[i] = rand() % 51;

        cout << list[i] << ' ';
    }

    cout << "\nOrdem Inversa:\n";

    for ( auto i { list.crbegin() }, size { list.crend() }; i < size; ++i )
    {
        cout << *i << ' ';
    }

    cout << '\n';
}

/**
 * Faça um algoritmo que leia um vetor de 10 posições com números inteiros,
 * em seguida, mostre a soma e a média dos números digitados.
 */
void exercicio04()
{
    int soma { 0 };

    std::array<int, 10> list {};

    std::srand(time(nullptr));

    for ( std::size_t i { 0 }, size { list.size() }; i < size; ++i )
    {
        list[i] = rand() % 51;

        cout << list[i] << ' ';

        soma += list[i];
    }

    float media = (float) soma / list.size();

    cout
        << "\nSoma dos valores: " << soma
        << "\nMédia dos valores: " << std::showpoint << std::setprecision(4) << media
        << '\n'
    ;
}

/**
 * Faça um algoritmo que leia um vetor de 10 números. Em seguida,
 * escreva na tela o resultado de cada posição do vetor multiplicado por 2.
 */
void exercicio05()
{
    std::array<int, 10> list {};

    std::srand(time(nullptr));

    for ( std::size_t i { 0 }, size { list.size() }; i < size; ++i )
    {
        list[i] = rand() % 51;

        cout << list[i] << ' ';
    }

    cout << "\n\n";

    for ( auto& number : list )
    {
        cout << std::setfill('0') << std::setw(2) << number << " * 2 = " << number * 2 << '\n';
    }
}

/**
 * Faça um algoritmo que leia um vetor de 10 posições.
 * Em seguida, informe quais números do vetor digitado são divisíveis por 3 e 5.
 */
void exercicio06()
{
    std::array<int, 10> list {};

    std::srand(time(nullptr));

    for ( std::size_t i { 0 }, size { list.size() }; i < size; ++i )
    {
        list[i] = rand() % 51;

        cout << list[i] << ' ';
    }

    cout << "\n\n";

    for ( auto& number : list )
    {
        if ( number % 3 == 0 and number % 5 == 0 )
        {
            cout << std::setfill('0') << std::setw(2) << number << " é divisível.\n";
        }
    }
}


bool isPar(int number)
{
    return number % 2 == 0;
}

bool isPrime(int dividend)
{
    if ( dividend < 1 )
    {
        return false;
    }

    for ( int divisor = 2; divisor < dividend; ++divisor )
    {
        if ( dividend % divisor == 0 )
        {
            return false;
        }
    }

    return true;
}

/**
 * Faça um algoritmo que leia um vetor de 10 posições.
 * Em seguida, informe quais números do
 * vetor digitado são pares, quais são impares e quais são primo
 */
void exercicio07()
{
    std::array<int, 10> lista {};

    std::srand(time(nullptr));

    for ( std::size_t i { 0 }, size { lista.size() }; i < size; ++i )
    {
        lista[i] = rand() % 51;

        cout << lista[i] << ' ';
    }

    cout << "\n\n";

    for ( auto& number : lista )
    {
        if ( isPar(number) )
        {
            cout << std::setfill('0') << std::setw(2) << number << " é par e ";
        }
        else
        {
            cout << std::setfill('0') << std::setw(2) << number << " é ímpar e ";
        }

        cout << (( isPrime(number) ) ? "é primo." : "não é primo.") << '\n';
    }
}

void exercicio08()
{
    std::vector<int> vector {}, reversed {};

    std::srand(time(nullptr));

    for ( int i { 0 }; i < 10; ++i )
    {
        vector.push_back(rand() % 51);

        cout << vector.back() << ' ';
    }

    cout << "\n\n";

    for ( auto i { vector.crbegin() }, size { vector.crend() }; i != size; ++i )
    {
        reversed.push_back(*i);

        cout << reversed.back() << ' ';
    }

    cout << '\n';
}

void exercicio09()
{
    std::array<int, 5> array1 {}, array2 {}, array3 {};

    std::srand(time(nullptr));

    for ( int i { 0 }; i < 5; ++i )
    {
        array1.at(i) = rand() % 51;
        array2.at(i) = rand() % 51;
        array3.at(i) = array1.at(i) + array2.at(i);
    }

    cout << "Array 1\tArray 2\tArray 3\n\n";

    for ( std::size_t i { 0 }, size { array1.size() }; i != size; ++i )
    {
        cout << array1.at(i) << '\t' << array2.at(i) << '\t' << array3.at(i) << '\n';
    }

    cout << std::endl;
}

void exercicio10()
{
    int biggest { 0 };

    std::vector<int> vector {};

    std::srand(time(nullptr));

    for ( int i { 0 }; i < 10; ++i )
    {
        vector.push_back(rand() % 51);

        if ( vector.at(i) > biggest )
        {
            biggest = vector.at(i);
        }
    }

    for ( const auto& number : vector )
    {
        cout << number << ' ';
    }

    cout << "\nMaior número encontrado: " << biggest << '\n';
}