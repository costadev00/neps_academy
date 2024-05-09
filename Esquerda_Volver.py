n = int(input())
s = input()
direcoes = 'NLSO'
# print(direcoes)
direcao_inicial = 0
for i in range(n):
    if s[i] == 'D':
        direcao_inicial += 1
    else:
        direcao_inicial -= 1
    if(direcao_inicial<0):
        direcao_inicial = 3

# print(direcao_inicial)
print(direcoes[direcao_inicial])