def max_activities(D, C_activities, R_activities):
    c_index = 0  # Índice da próxima atividade cansativa
    r_index = 0  # Índice da próxima atividade revigorante
    activities_done = 0

    while c_index < len(C_activities) or r_index < len(R_activities):
        # Tenta realizar a próxima atividade cansativa, se possível
        if c_index < len(C_activities) and D >= C_activities[c_index]:
            D -= C_activities[c_index]  # Consome disposição
            c_index += 1
            activities_done += 1
        # Caso contrário, tenta realizar a próxima atividade revigorante
        elif r_index < len(R_activities):
            D += R_activities[r_index]  # Recupera disposição
            r_index += 1
            activities_done += 1
        else:
            # Sem disposição suficiente para a próxima cansativa e sem revigorantes restantes
            break

    return activities_done

# Leitura da entrada
D, C, R = map(int, input().split())
C_activities = [int(input()) for _ in range(C)]
R_activities = [int(input()) for _ in range(R)]

# Chamada da função e impressão do resultado
print(max_activities(D, C_activities, R_activities))
