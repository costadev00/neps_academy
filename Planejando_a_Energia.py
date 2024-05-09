import math

n = int(input())
for i in range(n):
     #Determinar a taxa de consumo medio anual de energia
    ano1 ,consumo_ano1, ano2, consumo_ano2=input().split()

    ano1 = int(ano1)
    ano2 = int(ano2)
    consumo_ano1 = float(consumo_ano1)
    consumo_ano2 = float(consumo_ano2)
    consumo_medio = (consumo_ano2 - consumo_ano1)/(ano2 - ano1)
    #devera ser impresso o consumo medio com 2 casas decimais separadas por virgula ao inves de ponto
    # print("{:.2f}".format(consumo_medio).replace('.',','))
    ans = math.trunc(consumo_medio*100)/100
    print(f'{ans:.2f}'.replace('.',','))