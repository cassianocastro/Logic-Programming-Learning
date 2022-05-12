
class Exercise01:

    """List 01, Exercise 01."""

    def getDolars(self, cotacao_dolar, valor_reais):
        try:
            return float(valor_reais) / float(cotacao_dolar)
        except:
            raise Exception("Os dados informados não puderam ser convertidos...")

    def do(self):
        try:
            cotacao     = input("Cotação do Dólar atualmente: ")
            valor_reais = input("Valor em reais a converter: ")

            print(
                f"O valor em dólares é: U$ {self.getDolars(cotacao, valor_reais):.2f}."
            )
        except Exception as e:
            print(e)

if __name__ == '__main__':
    Exercise01.do()