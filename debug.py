mp = {}
print(type(mp))
n=1
#creates a map(dict) in the format id: [name, visits_per_day, premium_user]
for i in range(n):
    mp[i] = []
    name = input()
    visits_per_day = int(input())
    premium_user = input()
    mp[i].append(name)
    mp[i].append(visits_per_day)
    mp[i].append(premium_user)
print(mp)
