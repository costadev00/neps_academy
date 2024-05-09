a = int(input())
b = int(input())
b*=7

ans = True
for i in range(b):
    a+=1
    if(a>30):
        ans=False
        break
if not ans:
    print(0)
else: 
    print(1)