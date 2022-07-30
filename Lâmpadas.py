l1=0
l2=0

n = int(input())
l=[]
l = input().split()
sz = len(l)
for i in range(sz):
    # print(type(l[i]))
    if int(l[i]) == 1:
        if l1==0:
            l1=1
        else:
            l1=0
    else:
        if l2==0:
            l2=1
        else:
            l2=0
        if l1==0:
            l1=1
        else:
            l1=0

print(l1)
print(l2)