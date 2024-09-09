lista_de_inteiros = map(int, input().split())

resultado = [item* 2 if item %2 ==0 else item *3 for item in lista_de_inteiros]

print(resultado)
