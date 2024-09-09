n = int(input())
#create a list of tuple in range n
tp = []

# tp.append(('neps','academy'))
for i in range(n):
    s = input().split()
    # print(s)
    tp.append((s[0], s[1]))
print(tp)