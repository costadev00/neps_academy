n = int(input())
matriz = []
for i in range(n):
    matriz.append(input().split())

#soma das linhas
soma_linhas = 0
for i in range(n):
    soma_linhas = 0
    for j in range(n):
        soma_linhas += int(matriz[i][j])

#soma das colunas
soma_colunas = 0
for i in range(n):
    soma_colunas = 0
    for j in range(n):
        soma_colunas += int(matriz[j][i])
        

#soma das diagonal principal
soma_diagonal_principal = 0
for i in range(n):
    soma_diagonal_principal += int(matriz[i][i])

#soma da diagonal secundaria
soma_diagonal_secundaria = 0
for i in range(n):
    soma_diagonal_secundaria += int(matriz[i][n-i-1])
st = set()
st.add(soma_linhas)
st.add(soma_colunas)
st.add(soma_diagonal_principal)
st.add(soma_diagonal_secundaria)

if len(st) == 1:
    print(soma_linhas)
else:
    print(-1)