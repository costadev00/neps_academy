n,m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = a + b
c.sort()
for i in range(n+m):
    print(c[i])