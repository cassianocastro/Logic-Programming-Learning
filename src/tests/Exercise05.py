
class Exercise05:

    """List 01, Exercise05."""

    def getShift(self, serie: int):
        if serie >= 1 and serie <= 4:
            return "Turno da Manhã."
        elif serie >= 5 and serie <= 8:
            return "Turno da Tarde."

        return "Dígito inválido!!"

    def do(self):
        serie = input("Informe o número da série (Somente de 1-8): ")

        try:
            serie = int(serie)
        except Exception:
            print("A entrada informada não é um número inteiro.")
        else:
            print(self.getShift(serie))

if __name__ == '__main__':
    Exercise05.do()