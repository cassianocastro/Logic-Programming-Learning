
class Exercise02:

    """List 01, Exercise 02."""

    def celsiusToFarenheit(self, celsius):
        return (celsius * 1.8) + 32

    def celsiusToKelvin(self, celsius):
        return celsius + 273.15


    def do(self):
        try:
            celsius = float(input("Temperatura em Graus Celsius: "))
        except Exception as e:
            print("A entrada informada trata-se de um valor inválido.")
        else:
            print(
                "A temperatura em..."
                f"\nGraus Farenheit..: {self.celsiusToFarenheit(celsius):.2f}"
                f"\nGraus Kelvin.....: {self.celsiusToKelvin(celsius):.2f}"
            )

if __name__ == '__main__':
    Exercise02.do()