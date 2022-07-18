#cria uma lista, em python pode misturar os tipos
l = [1,2,3,4,5, 5.5, "ha uma string aqui"]

print(type(l))

print(l)

#adiciona 10 ao final da lista
l.append(10)
print(l)

#em python a lista é automaticamente circular
print(l[-1])

#deleta elementos da lista
del l[1]