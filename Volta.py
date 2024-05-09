import math
a,b = input().split()
a = int(a)
b = int(b)
n = b / (b - a)
print(math.ceil(n))


