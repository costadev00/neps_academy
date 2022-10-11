def funcao(x):
    print("Valor de x:", x)

#funcoes em python nós podemos retornar multiplos valores de uma só vez
def funcao2(x):
    return x, x**2


funcao(2)
#retorna uma tupla
print(funcao2(2))