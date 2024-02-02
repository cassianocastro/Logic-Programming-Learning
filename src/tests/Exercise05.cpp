#include "./Exercises.hpp"

using std::string;

string Tests::Exercise05::getShift(int serie)
{
    if ( serie >= 1 and serie <= 4 )
    {
        return string("Turno da Manhã.");
    }
    else if ( serie >= 5 and serie <= 8 )
    {
        return string("Turno da Tarde.");
    }

    return string("Dígito inválido!");
}

void Tests::Exercise05::doExercise(void)
{
    try
    {
        int serie { 0 };

        std::cout << "Informe o número da série (Somente de 1-8): ";
        std::cin >> serie;

        if ( std::cin.fail() )
        {
            throw std::invalid_argument("A entrada não é um número inteiro.");
        }

        std::cout << this->getShift(serie) << '\n';
    }
    catch ( const std::invalid_argument& e )
    {
        std::cerr << e.what() << '\n';
    }
}