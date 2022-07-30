v = 0
while v<5:
    print(v)
    v+=1

for i in [1,2,3,4]:
        print(i)

for i in range(1,5):
    print(i)

#o range retorna um intervalo... para fazermos com que ele retorne uma lista, faca como na linha 14
arr = range(1,10)
arr = list(arr)
print(arr[0])