#include <array>
#include <iostream>
#include <iomanip>
#include <vector>

using std::cout, std::cin;

/**
 * Faça um algoritmo que gere um vetor de 10 posições com números inteiros
 * preenchidos aleatoriamente no intervalo 0 a 50, em seguida, escreva os números
 * gerados. O Tamanho do vetor deverá ser definido em uma variável constante.
 */
void exercicio01(void)
{
    const int ARRAY_SIZE = 10;

    std::array<int, ARRAY_SIZE> array {};

    std::srand(time(nullptr));

    cout << "Generated array: ";

    for ( int i { 0 }; i < 10; ++i )
    {
        array.at(i) = rand() % 51;

        cout << array.at(i) << ' ';
    }

    cout << '\n';
}

/**
 * Faça um algoritmo que gere um vetor de 10 posições com números inteiros preenchidos
 * aleatoriamente no intervalo 0 a 50, em seguida, escreva os números gerados.
 * O Tamanho do vetor e o limite de geração dos número aleatórios deverá ser
 * definido em variável constante.
 */
void exercicio02(void)
{
    const unsigned short int ARRAY_SIZE = 10, RANDOM_LIMIT = 51;

    std::array<int, ARRAY_SIZE> array {};

    std::srand(time(nullptr));

    cout << "Generated array: ";

    for ( int i { 0 }; i < 10; ++i )
    {
        array.at(i) = rand() % RANDOM_LIMIT;

        cout << array.at(i) << ' ';
    }

    cout << '\n';
}

int getRandomNumber(void)
{
    const unsigned short int RANDOM_LIMIT { 51 };

    unsigned int number = rand() % RANDOM_LIMIT;

    if ( number % 2 not_eq 0 )
    {
        ++number;
    }

    return number;
}

/**
 * Faça um algoritmo que gere um vetor de 10 posições com números inteiros
 * pares preenchidos aleatoriamente no intervalo 0 a 50, em seguida,
 * escreva os números gerados. O Tamanho do vetor e o limite de geração dos
 * número aleatórios deverá ser definido em variável constante.
 */
void exercicio03(void)
{
    const unsigned int ARRAY_SIZE { 10 };

    std::array<int, ARRAY_SIZE> array {};

    std::srand(time(nullptr));

    for ( int i { 0 }; i < ARRAY_SIZE; ++i )
    {
        array.at(i) = getRandomNumber();
    }

    cout << "Generated array: ";

    for ( const auto& number : array )
    {
        cout << number << ' ';
    }

    cout << '\n';
}

int getBiggestValueFromArray(const std::array<int, 10>* const array)
{
    int biggest { 0 };

    for ( const auto& number : *array )
    {
        if ( number > biggest )
        {
            biggest = number;
        }
    }

    return biggest;
}

int getSmallestValueFromArray(const std::array<int, 10>* const array)
{
    int smallest { array->at(0) };

    for ( const auto& number : *array )
    {
        if ( number < smallest )
        {
            smallest = number;
        }
    }

    return smallest;
}

/**
 * Faça um algoritmo que gere um vetor de 10 posições com números inteiros
 * pares preenchidos aleatoriamente no intervalo 0 a 50, em seguida, escreva
 * o vetor gerado, o maior e o menor número existentes no vetor gerado. O Tamanho
 * do vetor e o limite de geração dos número aleatórios deverá ser definido em
 * variável constante.
 */
void exercicio04(void)
{
    const unsigned short int ARRAY_SIZE { 10 };

    std::array<int, ARRAY_SIZE> array {};

    std::srand(time(nullptr));

    for ( int i { 0 }; i < ARRAY_SIZE; ++i )
    {
        array.at(i) = getRandomNumber();
    }

    cout << "Generated array: ";

    for ( const auto& number : array )
    {
        cout << number << ' ';
    }

    cout
        << "\nMaior número: " << getBiggestValueFromArray(&array)
        << "\nMenor número: " << getSmallestValueFromArray(&array)
        << '\n'
    ;
}

/**
 * Faça um algoritmo que gere um vetor de 10 posições com números inteiros
 * preenchidos aleatoriamente no intervalo 20 a 50, em seguida, escreva os
 * números gerados. O Tamanho do vetor os limites inferior e superior de geração
 * dos número aleatórios deverá ser definido em variável constante.
 */
void exercicio05(void)
{
    const unsigned short int ARRAY_SIZE { 10 }, RANDOM_MIN { 20 }, RANDOM_LIMIT { 50 };

    std::array<int, ARRAY_SIZE> vector {};

    std::srand(time(nullptr));

    for ( int i { 0 }; i < ARRAY_SIZE; ++i )
    {
        vector.at(i) = RANDOM_MIN + rand() % (RANDOM_LIMIT - RANDOM_MIN);

        cout << vector.at(i) << ' ';
    }

    cout << '\n';
}

int even(const bool isEven)
{
    const unsigned short int RANDOM_LIMIT { 51 };

    int number = rand() % RANDOM_LIMIT;

    if ( isEven )
    {
        return ( number % 2 == 0 ) ? number : (number + 1);
    }

    return ( number % 2 != 0 ) ? number : (number + 1);
}

/**
 * Faça um algoritmo que gere um vetor de 10 posições com números inteiros
 * preenchidos aleatoriamente no intervalo 0 a 50, todavia, o vetor possui restrições.
 * As posições pares do vetor só admitem números pares e as posições impares do vetor
 * só admitem números impares. Escrever o vetor gerado. O Tamanho do vetor e o limite
 * de geração dos números aleatórios deverá ser definido em variável constante.
 */
void exercicio06(void)
{
    const unsigned short int ARRAY_SIZE { 10 };

    std::array<int, ARRAY_SIZE> array {};

    std::srand((unsigned) time(nullptr));

    for ( int i { 0 }; i < ARRAY_SIZE; ++i )
    {
        array.at(i) = even(i % 2 == 0);
    }

    for ( const auto& number : array )
    {
        cout << number << ' ';
    }

    cout << '\n';
}

/**
 * Faça um algoritmo que gere um vetor de 10 posições com números inteiros preenchidos
 * aleatoriamente no intervalo 0 a 50, em seguida, separe os números pares e os números impares do
 * vetor gerador em dois vetores, um somente com os números pares encontrados no vetor gerado e
 * outro somente com os números impares encontrados no vetor gerado. Em seguida, escrever o vetor
 * gerado, o vetor somente de números pares e o vetor somente de números impares. O Tamanho do
 * vetor e o limite de geração dos número aleatórios deverá ser definido em variável constante.
 */
void exercicio07(void)
{
    const unsigned short int ARRAY_SIZE { 10 }, RANDOM_LIMIT { 51 };

    std::array<int, ARRAY_SIZE> array {};

    std::vector<int> odd {}, even {};

    for ( int i { 0 }; i < ARRAY_SIZE; ++i )
    {
        array[i] = rand() % RANDOM_LIMIT;

        if ( array[i] % 2 == 0 )
            even.push_back(array[i]);
        else
            odd.push_back(array[i]);
    }

    cout << "Generated array:\n";

    for ( const auto& number : array )
    {
        cout << number << ' ';
    }

    cout << "\nEven numbers vector:\n";

    for ( const auto& number : even )
    {
        cout << number << ' ';
    }

    cout << "\nOdd numbers vector:\n";

    for ( const auto& number : odd )
    {
        cout << number << ' ';
    }

    cout << '\n';
}

/**
 * Faça um algoritmo que gere um vetor de 5 posições preenchido com números aleatoriamente
 * gerados. Só serão admitidos no vetor números divisíveis por 3 no intervalo 0 a 100. Escrever o
 * vetor gerado. O Tamanho do vetor e o limite de geração dos número aleatórios deverá ser definido
 * em variável constante.
 */
void exercicio08(void)
{
    const unsigned short int ARRAY_SIZE { 5 }, RANDOM_LIMIT { 101 };

    std::array<int, ARRAY_SIZE> array {};

    std::srand((unsigned int) time(nullptr));

    for ( int i { 0 }, n { 0 }; i < ARRAY_SIZE; ++i )
    {
        do n = rand() % RANDOM_LIMIT; while ( n % 3 != 0 );

        array.at(i) = n;
    }

    cout << "Generated array: ";

    for ( const auto& number : array )
    {
        cout << number << ' ';
    }

    cout << '\n';
}

bool isPrime(const int dividend)
{
    if ( dividend <= 1 )
    {
        return false;
    }

    for ( int divisor { 2 }; divisor < dividend; ++divisor )
    {
        if ( dividend % divisor == 0 )
        {
            return false;
        }
    }

    return true;
}

/**
 * Faça um algoritmo que gere um vetor de 5 posições com números primos preenchidos
 * aleatoriamente no intervalo 0 a 100. O Tamanho do vetor e o limite de geração dos números
 * aleatórios deverá ser definido em variável constante.
 */
void exercicio09(void)
{
    const unsigned short int ARRAY_SIZE { 5 }, RANDOM_LIMIT { 101 };

    std::array<int, 5> array {};

    std::srand((unsigned int) time(nullptr));

    for ( int i { 0 }, n { 0 }; i < ARRAY_SIZE; ++i )
    {
        do n = rand() % RANDOM_LIMIT; while ( not isPrime(n) );

        array.at(i) = n;
    }

    cout << "Generated array: ";

    for ( const auto& n : array )
    {
        cout << n << ' ';
    }

    cout << '\n';
}

/**
 * Faça um algoritmo que gere um vetor de 10 posições com números inteiros preenchidos
 * aleatoriamente no intervalo 0 a 50. Os números não podem ser repetidos. Em seguida, escreva os
 * números gerados. O Tamanho do vetor e os limites inferior e superior de geração dos número
 * aleatórios deverá ser definido em variável constante.
 */
void exercicio10(void)
{
    const unsigned short int ARRAY_SIZE { 10 }, RANDOM_LIMIT { 51 };

    std::array<int, ARRAY_SIZE> array {};

    std::srand((unsigned int) time(nullptr));

    for ( int i { 0 }, n { 0 }; i < ARRAY_SIZE; ++i )
    {
        n = rand() % RANDOM_LIMIT;

        for ( int j = 0; j < i; ++j )
        {
            if ( n == array[j] )
            {
                i = 0;
            }
        }

        array[i] = n;
    }

    cout << "Generated array: ";

    for ( const auto& n : array )
    {
        cout << n << ' ';
    }

    cout << '\n';
}