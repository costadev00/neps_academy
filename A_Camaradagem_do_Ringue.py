w,n,p = map(int, input().split())
ans = 0

punchs = list(map(int, input().split()))
for a in punchs:
    if(a>=w and a<=n):
        ans+=1
print(ans)