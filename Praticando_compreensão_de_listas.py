lista_de_inteiros = map(int, input().split())

resultado =  []
for numero in lista_de_inteiros:
    if numero % 2 == 0:
        resultado.append(numero*2)
    else:
        resultado.append(numero * 3)
print(resultado)
