#include "./Exercises.hpp"

float Tests::Exercise02::celsiusToFarenheit(float celsius)
{
    return celsius * 1.8 + 32;
}

float Tests::Exercise02::celsiusToKelvin(float celsius)
{
    return celsius + 273.15;
}

void Tests::Exercise02::doExercise(void)
{
    float celsius = 0.0f;

    std::cout << "Temperatura em Graus Celsius: ";
    std::cin >> celsius;

    std::cout
        << "A temperatura em..."
        << "\nGraus Farenheit..: " << std::setprecision(4) << this->celsiusToFarenheit(celsius)
        << "\nGraus Kelvin.....: " << std::setprecision(4) << this->celsiusToKelvin(celsius)
        << '\n';
    ;
}