n = int(input())

for i in range(n):
    x, y = input().split()
    x = float(x)
    y = float(y)
    if y==0:
        print("divisao impossivel")
    else:
        print("{:.1f}".format(x/y))
