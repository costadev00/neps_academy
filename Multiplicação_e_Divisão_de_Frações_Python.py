class Fracao:
    def __init__(self, numerador, denominador):
        self.numerador = numerador
        self.denominador = denominador

    # TODO: Implemente o operador de multiplicação.
    def __mul__(self, fracao):
        numerador = self.numerador * fracao.numerador
        denominador = self.denominador * fracao.denominador
        return Fracao(numerador, denominador)

    # TODO: Implemente o operador de divisão.
    def __truediv__(self, fracao):
        numerador = self.numerador * fracao.denominador
        denominador = self.denominador * fracao.numerador
        return Fracao(numerador, denominador)


if __name__ == "__main__":

    a_numerador, a_denominador = map(int, input().split())
    b_numerador, b_denominador = map(int, input().split())
    op = input()

    a = Fracao(a_numerador, a_denominador)
    b = Fracao(b_numerador, b_denominador)

    if op == "M":
        c = a * b
    else:
        c = a / b

    print(c.numerador, c.denominador)
