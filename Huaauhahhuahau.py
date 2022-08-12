#a function that recives a string and returns if its a palindrome or not
def is_palindrome(s):
    sz = len(s)
    for i in range(sz):
        if s[i] != s[sz-1-i]:
            return False
    return True

s = input()
sz = len(s)
s2 = ''
for i in range(sz):
    if s[i] =='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u':
        s2 += s[i]

#a string s3 that copy s2 values but in reverse order
s3 = ''
for i in range(len(s2)):
    s3 += s2[len(s2)-1-i]

#if s2 equals s3 print S else print N
# print(s2)
# print(s3)
if s2 == s3:
    print('S')
else:
    print('N')
