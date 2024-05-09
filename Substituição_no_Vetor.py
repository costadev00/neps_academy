arr = []
for i in range(10):
    n = int(input())
    arr.append(n)
min = arr[0]
max = arr[0]

for i in range(10):
    if arr[i]<min:
        min = arr[i]

cnt =[]
for i in range(10):
    if arr[i]==min:
        cnt.append(i)
        arr[i]=-1
print("Menor:",min)
print("Ocorrencias:",end=' ')
for i in cnt:
    print(i,end=' ')
print()
for i in arr:
    print(i,end=' ')