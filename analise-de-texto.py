texto = input()
palavra = input()
texto = texto.split()
cont = 0
for i in texto:
    for j in range(len(palavra)):
        if palavra[j] in i:
            cont += 1
            break
print(cont)