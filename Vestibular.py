n  = int(input())
a = input()
g = input()
c=0
for i in range(n):
    if a[i] == g[i]:
        c+=1
print(c)