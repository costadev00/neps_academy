arr1 = input()
arr2 = input()

#convert arr1 and arr2 to list of int

arr1 = arr1.split()
arr2 = arr2.split()

# xor arr1 and arr2 and print the result
arr3 = []
for i in range(len(arr1)):
    arr3.append(int(arr1[i]) ^ int(arr2[i]))

# print(arr3)
if 0 in arr3:
    print('N')
else:
    print('Y')