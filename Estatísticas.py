n = int(input())
arr = []
for i in range(n):
    x = int(input())
    arr.append(x)
min_number = 1000
total_diff = 0
for i in range(n):
    if arr[i]<=min_number:
        min_number = arr[i]
    elif arr[i]>min_number:
        total_diff +=arr[i]-min_number 
print(total_diff)