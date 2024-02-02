#include "./Exercises.hpp"

float Tests::Exercise01::getDolars(float cotacao, float value)
{
    if ( cotacao == 0.0f )
    {
        throw std::runtime_error("Os dados informados não puderam ser convertidos...");
    }

    return value / cotacao;
}

void Tests::Exercise01::doExercise(void)
{
    float cotacao = 0.0f, value = 0.0f;

    std::cout << "Cotação do Dólar atualmente: ";
    std::cin >> cotacao;

    std::cout << "Valor em reais a converter: ";
    std::cin >> value;

    try
    {
        float result = this->getDolars(cotacao, value);

        std::cout << "O valor em dólares é: U$ " << std::setprecision(4) << result << '\n';
    }
    catch ( const std::runtime_error& e )
    {
        std::cerr << e.what() << '\n';
    }
}