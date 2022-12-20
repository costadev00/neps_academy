n = int(input())
acm = 0
l = []
l = input().split()

for i in range(n):
    x = int(l[i])
    acm+=x

print(acm)