# Dicionário armazenando dados anteriores dos alunos
alunos = {"tiago": 10, "clara": 8, "davi": 6}

# Criação do novo dicionário
alunos_atualizado = {
    chave.upper(): valor + 1 for chave, valor in alunos.items()
}

print(alunos_atualizado) # Imprime novo dicionário
