s = input()
vogais = 'aeiou'
for i in s:
    if(i not in vogais):
        s = s.replace(i,'')
# print(s)
s2 = s[::-1]
if s == s2:
    print('S')
else:
    print('N')