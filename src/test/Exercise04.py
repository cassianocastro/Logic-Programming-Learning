
class Exercise04:

    """List 01, Exercise04."""

    def getDiscount(self, value):
        discount = value * 0.05

        return {
            "gross"   : value,
            "discount": discount,
            "liquid"  : value - discount
        }

    def getAddition(self, value):
        addition = value * 0.07

        return {
            "gross"   : value,
            "addition": addition,
            "liquid"  : value + addition
        }

    def do(self):
        try:
            value = float(input("Valor: "))
        except Exception as e:
            print("A entrada informada trata-se de um valor inválido.")
        else:
            if value < 100:
                values = self.getDiscount(value)

                print(
                    "\nValor Bruto....: R$ {:.2f}"
                    "\nValor Líquido..: R$ {:.2f}"
                    "\nDesconto.......: R$ {:.2f}"
                    .format(
                        values["gross"],
                        values["liquid"],
                        values["discount"]
                    )
                )
            else:
                values = self.getAddition(value)

                print(
                    "\nValor Bruto....: R$ {:.2f}"
                    "\nValor Líquido..: R$ {:.2f}"
                    "\nAcréscimo......: R$ {:.2f}"
                    .format(
                        values["gross"],
                        values["liquid"],
                        values["addition"]
                    )
                )

if __name__ == '__main__':
    Exercise04.do()
