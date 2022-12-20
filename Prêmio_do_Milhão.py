n = input()
n = int(n)
acm = 0
cont=0
while(n>0):
    l  = input()
    l = int(l)
    #print(acm)
    acm+=l
    cont+=1
    if(acm>=1000000):
        break
    n-=1

print(cont)