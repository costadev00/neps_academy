import sys

# Lê a entrada até o EOF
entrada = sys.stdin.read().strip()

# Remove a tag <pre> e </pre>
entrada = entrada.replace('<pre>', '').replace('</pre>', '').strip()

# Divide a entrada em linhas
linhas = entrada.split('\n')

# Verifica se a entrada tem pelo menos uma linha
if len(linhas) < 1:
    print("NAO")
    sys.exit()

# Primeira linha contém m e n
try:
    m, n = map(int, linhas[0].split())
except ValueError:
    print("NAO")
    sys.exit()

# Verifica se a entrada tem o número correto de linhas para a matriz
if len(linhas) < m + 1:
    print("NAO")
    sys.exit()

# Lê a matriz
matriz = []
for i in range(1, m + 1):
    matriz.append(linhas[i].split())

# Palavra a ser encontrada
palavra = "CANETAAZUL"

# Função para verificar horizontalmente
def verifica_horizontal(matriz, palavra):
    for linha in matriz:
        if ''.join(linha).find(palavra) != -1:
            return True
    return False

# Função para verificar verticalmente
def verifica_vertical(matriz, palavra):
    for col in range(n):
        coluna = ''.join([matriz[linha][col] for linha in range(m)])
        if coluna.find(palavra) != -1:
            return True
    return False

# Função para verificar diagonalmente
def verifica_diagonal(matriz, palavra):
    # Diagonais principais
    for d in range(m + n - 1):
        diagonal1 = ''.join([matriz[i][d - i] for i in range(max(0, d - n + 1), min(m, d + 1))])
        diagonal2 = ''.join([matriz[i][n - 1 - (d - i)] for i in range(max(0, d - n + 1), min(m, d + 1))])
        if diagonal1.find(palavra) != -1 or diagonal2.find(palavra) != -1:
            return True
    return False

# Verifica todas as direções
if verifica_horizontal(matriz, palavra) or verifica_vertical(matriz, palavra) or verifica_diagonal(matriz, palavra):
    print("SIM")
else:
    print("NAO")