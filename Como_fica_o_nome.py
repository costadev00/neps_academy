def display_name(name, t):
    # Calcule o comprimento do nome
    x = len(name)
    
    # Se t for maior que x, pegue t módulo x
    if t > x:
        t = t % x
    
    # Imprima os caracteres do nome a partir do caractere t até o final
    for i in range(t, len(name)):
        print(name[i], end="")
    
    # Imprima os caracteres do início do nome até o caractere t
    for i in range(t):
        print(name[i], end="")
    
    print("")

def main():
    # Leia o número de casos de teste
    instances = int(input())
    
    for _ in range(instances):
        # Leia a linha de entrada
        input_line = str(input())
        
        # Divida a linha de entrada em tempo e nome
        i = 0
        t = ""
        while input_line[i] != " ":
            t += input_line[i]
            i += 1
        t = int(t)
        name = input_line[i+1:]
        
        # Exiba o nome após t segundos
        display_name(name, t)

main()

