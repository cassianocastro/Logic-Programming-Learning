
class Exercise03:

    """List 01, Exercise03."""

    def getDiscountBy(self, sex, value):
        if sex.startswith('m'):
            return value * 0.1

        return value * 0.15

    def do(self):
        sex = '\0'

        try:
            value = float(input("Valor da Compra: "))
            sex   = input("Sexo: ")
        except Exception as e:
            print("O valor de compra é inválido!!")
        else:
            while ( not sex.startswith('m') and not sex.startswith('f') ):
                sex = input("Sexo inválido!! Digite novamente: ").lower()

            discount = self.getDiscountBy(sex, value)
            print(
                f"\nValor Bruto....: R$ {value:.2f}"
                f"\nValor Líquido..: R$ {value - discount:.2f}"
                f"\nDesconto.......: R$ {discount:.2f}"
            )

if __name__ == '__main__':
    Exercise03.do()