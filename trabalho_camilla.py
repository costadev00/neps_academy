l =int(input())
texto = []

for i in range(l):
    linha = input()
    linha = linha.lower()
    linha = linha.split()
    # print(linha)
    for i in range(len(linha)):
        # print(linha[i])
        texto.append(linha[i])
# print(texto)
palavra = []
n = int(input())
for i in range(n):
    linha = input()
    linha = linha.lower()
    linha = linha.split()
    palavra.append(linha)

#remove {".", ",", ":", ";", "!", "?"}. de texto
for i in range(len(texto)):
    texto[i] = texto[i].replace(".", "")
    texto[i] = texto[i].replace(",", "")
    texto[i] = texto[i].replace(":", "")
    texto[i] = texto[i].replace(";", "")
    texto[i] = texto[i].replace("!", "")
    texto[i] = texto[i].replace("?", "")

def conta_ocorrencia(palavra_buscada, texto):
    ocorrencias = 0

    for texto_word in texto:
        # print(texto[0])
        if len(palavra_buscada) != len(texto_word):
            continue  # Ignorar palavras com comprimentos diferentes

        match = True
        for letra_busca, letra_texto in zip(palavra_buscada, texto_word):
            if letra_busca != letra_texto and letra_busca != '*':
                match = False
                break

        if match:
            ocorrencias += 1

    return ocorrencias

def conta_similares(palavra_buscada, texto):
    similares = 0

    for texto_word in texto:
        if palavra_buscada in texto_word:
            similares += 1

    return similares

for i in range(n):
    print("Palavra buscada:",palavra[i][0])
    ocorrencia = conta_ocorrencia(palavra[i][0], texto)
    similares = conta_similares(palavra[i][0], texto)
    print("Ocorrencia:",ocorrencia)
    print("Palavras similares:",similares)