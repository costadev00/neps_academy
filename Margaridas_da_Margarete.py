n  = int(input())
l = []
l = [int(x) for x in input().split()]

jov = 0
adu = 0
ido = 0
for i in range(n):
    if l[i]==1:
        adu+=1
    elif l[i]==2:
        ido+=1
        jov+=1

print("Jovem:",jov)
print("Adulta:",adu)
print("Idosa:",ido)