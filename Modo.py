n,m = map(int,input().split())
a = list(map(int,input().split()))
b = []

#Dada uma sequencia a de comprimento n. Cada termo dessa sequencia é um inteiro entre 1 e m.a
#Definida uma nova sequencia b de comprimento m. Cada termo dessa sequencia é o número de inteiros i de tal forma que a[i] = j, para j de 1 a m.
#Encontre o valor maximo da sequencia b.
for i in range(m):
    b.append(a.count(i+1))
print(max(b))