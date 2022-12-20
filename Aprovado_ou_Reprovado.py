a,b = input().split()
a = float(a)
b = float(b)
media = (a+b)/2
if media>=7:
    print("Aprovado")
elif media>=4:
    print("Recuperacao")
else:
    print("Reprovado")