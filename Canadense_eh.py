s = input()
sz = len(s)
final = s[sz-3]+s[sz-2]+s[sz-1]
if(final == 'eh?'):
    print("Canadian!")
else:
    print("Imposter!")