#include "./Exercises.hpp"

using std::string, std::map, std::pair;

const map<string, float>* Tests::Exercise04::getDiscount(float value)
{
    float discount = value * 0.05;

    map<string, float>* map = new std::map<string, float>();

    map->insert(pair<string, float>("gross", value));
    map->insert(pair<string, float>("discount", discount));
    map->insert(pair<string, float>("liquid", value - discount));

    return map;
}

const map<string, float>* Tests::Exercise04::getAddition(float value)
{
    float addition = value * 0.07;

    map<string, float>* map = new std::map<string, float>();

    map->insert(pair<string, float>("gross", value));
    map->insert(pair<string, float>("addition", addition));
    map->insert(pair<string, float>("liquid", value + addition));

    return map;
}

void Tests::Exercise04::doExercise(void)
{
    float value { 0.0f };

    try
    {
        std::cout << "Valor: ";
        std::cin >> value;

        if ( value < 0 )
        {
            throw std::runtime_error("Valor inválido!");
        }
    }
    catch ( const std::exception& e )
    {
        std::cerr << e.what() << '\n';
    }

    if ( value < 100 )
    {
        auto values = this->getDiscount(value);

        std::cout
            << "\nValor Bruto....: R$ " << std::setprecision(4) << values->at("gross")
            << "\nValor Líquido..: R$ " << std::setprecision(4) << values->at("liquid")
            << "\nDesconto.......: R$ " << std::setprecision(4) << values->at("discount")
            << '\n'
        ;

        delete values;
    }
    else
    {
        auto values = this->getAddition(value);

        std::cout
            << "\nValor Bruto....: R$ " << std::setprecision(4) << values->at("gross")
            << "\nValor Líquido..: R$ " << std::setprecision(4) << values->at("liquid")
            << "\nAcréscimo......: R$ " << std::setprecision(4) << values->at("addition")
            << '\n'
        ;

        delete values;
    }
}