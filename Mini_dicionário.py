n = int(input())
mp = {}
for i in range(n):
    s = input().split()
    mp[s[0]] = s[1]
s = input().split(" ")
for i in s:
    print(mp[i],end=" ")