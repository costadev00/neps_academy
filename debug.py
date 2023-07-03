def generate_primes(count):
    primes = []
    sieve = [True] * (count + 1)
    p = 2

    while p * p <= count:
        if sieve[p]:
            for i in range(p * p, count + 1, p):
                sieve[i] = False
        p += 1

    for p in range(2, count + 1):
        if sieve[p]:
            primes.append(p)

    return primes

# Exemplo de uso
primes = generate_primes(1000000)

# with open('numeros_primos.txt', 'w') as file:
#     for prime in primes:
#         file.write(str(prime) + ',')

q = int(input())
for i in range(q):
    n = int(input())
    print(primes[n-1])
