def karatsuba_mod(x, y):
    # Caso base
    if x < 10 or y < 10:
        return (x * y) % 9

    # Dividir os números em metades
    n = max(len(str(x)), len(str(y))) // 2
    a, b = x // 10**n, x % 10**n
    c, d = y // 10**n, y % 10**n

    # Multiplicar recursivamente as metades
    if n <= 2:
        ac = a * c
        bd = b * d
        adbc = (a + b) * (c + d)
    else:
        ac = karatsuba_mod(a, c)
        bd = karatsuba_mod(b, d)
        adbc = karatsuba_mod(a + b, c + d)

    # Calcular o resto final
    return (ac * 10**(2*n) + (adbc - ac - bd) * 10**n + bd) % 9

# Pré-computar potências de 10
pow10mod9 = [1]
for i in range(1, 100):
    pow10mod9.append((pow10mod9[-1] * 10) % 9)

def modulo(l, r):
    # Resto final
    modulo = 0

    for i in range(l, r+1):
        # Multiplica o resto anterior por 10 mod 9
        modulo = (modulo * pow10mod9[i - l]) % 9

        # Soma o dígito atual mod 9
        modulo = (modulo + karatsuba_mod(int(str(i)[0]), pow10mod9[1])) % 9

    return modulo

l, r = map(int, input().split())
resultado = modulo(l, r)
print(resultado)
