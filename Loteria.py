arr1 = input().split()
arr2 = input().split()

#conta quantos elementos iguais tem em cada lista]

cnt=0

for i in arr1:
    for j in arr2:
        if i == j:
            cnt+=1
            break
if cnt ==6:
    print("sena")
elif cnt ==5:
    print("quina")
elif cnt ==4:
    print("quadra")
elif cnt ==3:
    print("terno")
else:
    print("azar")