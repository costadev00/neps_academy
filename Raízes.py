import math
n = int(input())
l = []
l = input().split()
for i in range(len(l)):
    l[i] = float(l[i])
    print("{:.4f}".format(math.sqrt(l[i])))