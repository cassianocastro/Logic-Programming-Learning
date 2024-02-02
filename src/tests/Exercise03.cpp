#include "./Exercises.hpp"

float Tests::Exercise03::getDiscountBy(char sex, float value)
{
    if ( sex == 'm' )
    {
        return value * 0.1;
    }

    return value * 0.15;
}

float Tests::Exercise03::getValue(void)
{
    float value { 0.0f };

    std::cout << "Valor da Compra: ";
    std::cin >> value;

    if ( value < 0 )
    {
        throw std::runtime_error("Valor de compra inválido!");
    }

    return value;
}

char Tests::Exercise03::getSex(void)
{
    char sex { '\0' };

    std::cout << "Sexo: ";
    std::cin >> sex;

    while ( sex not_eq 'm' and sex not_eq 'f' )
    {
        std::clog << "Sexo inválido! Digite novamente: ";
        std::cin >> sex;

        sex = std::tolower(sex);
    }

    return sex;
}

void Tests::Exercise03::doExercise(void)
{
    try
    {
        char sex       = this->getSex();
        float value    = this->getValue();
        float discount = this->getDiscountBy(sex, value);

        std::cout
            << "\nValor Bruto....: R$ " << std::setprecision(4) << value
            << "\nValor Líquido..: R$ " << std::setprecision(4) << value - discount
            << "\nDesconto.......: R$ " << std::setprecision(4) << discount
            << '\n'
        ;
    }
    catch ( const std::exception& e )
    {
        std::cerr << e.what() << '\n';
    }
}