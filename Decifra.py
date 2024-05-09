alfabeto_min = 'abcdefghijklmnopqrstuvwxyz'

permutacao_inversivel = input()
cifra = {}
for i in range(0, 26):
    cifra[alfabeto_min[i]] = permutacao_inversivel[i]
mensagem_cifrada = input()
mensagem_decifrada = ''
# print(cifra)
for letra in mensagem_cifrada:
    mensagem_decifrada += cifra[letra]
print(mensagem_decifrada)