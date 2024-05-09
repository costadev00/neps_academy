# n = 6
# m = 5
# adj = []
# for i in range(n+1):
#     adj.append([])
# for i in range(m):
#     a,b = map(int,input().split())
#     adj[a].append(b)
#     adj[b].append(a)

# # for i in range(1,n+1):
# #     print(i,adj[i])



# dfs(1)

adj = {}
n = 6
m = 5
for i in range(n+1):
    adj[i] = []
for i in range(m):
    a,b = map(int,input().split())
    adj[a].append(b)
    adj[b].append(a)


visited = [False]*(n+1)
def dfs(v):
    visited[v] = True
    print(v)
    for u in adj[v]:
        if not visited[u]:
            dfs(u)
dfs(1)