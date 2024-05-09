n = int(input())
s = input()
m = int(input())
s2 = input()

#max prefix length
max_prefix = 0
if m>=n:
    for i in range(0,n):
        if s2[i] == s[i]:
            max_prefix += 1
        else:
            break
        # print(s[i])
else:
    for i in range(0,m):
        if s2[i] == s[i]:
            max_prefix += 1
        else:
            break
print(max_prefix)