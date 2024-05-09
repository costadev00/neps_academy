n = int(input())
arr = list(map(int, input().split()))
#longest contiguos increasing subsequence
l = 1
max_l = 1
for i in range(1, n):
    if arr[i] >= arr[i-1]:
        l += 1
    else:
        max_l = max(max_l, l)
        l = 1
max_l = max(max_l, l)
print(max_l)