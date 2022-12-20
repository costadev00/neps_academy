n = int(input())

l = input().split()
for i in range(n):
    l[i] = int(l[i])
l.sort()
for i in range(n):
    print(l[i], end=" ")