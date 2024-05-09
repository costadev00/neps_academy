n = int(input())

arr = []
for i in range(n):
    linha = input()
    s = linha
    arr.append(s)

mp = []
for i in range(5):
    mp.append(0)
for i in range(n):
    s = arr[i]
    for j in range(len(s)):
        if s[j] == 'Y':
            mp[j] += 1
        # mp[j] = s[j]    
        # print(j,s[j])

max = 0
index = []
for i in range(5):
    if mp[i]>=max:
        max = mp[i]

#how many times max apears in mp
for i in range(5):
    if mp[i] == max:
        index.append(i+1)
        # print(i+1)
for i in range(len(index)):
    if i == len(index)-1:
        print(index[i])
    else:
        print(index[i],end=',')