def sieve(limit):
    if limit < 2:
        return []
    
    res = [False] * (limit + 1)
    
    if limit >= 2:
        res[2] = True
    if limit >= 3:
        res[3] = True

    for x in range(1, int(limit**0.5) + 1):
        for y in range(1, int(limit**0.5) + 1):
            n = 4 * x**2 + y**2
            if n <= limit and (n % 12 == 1 or n % 12 == 5):
                res[n] ^= True

            n = 3 * x**2 + y**2
            if n <= limit and n % 12 == 7:
                res[n] ^= True

            n = 3 * x**2 - y**2
            if x > y and n <= limit and n % 12 == 11:
                res[n] ^= True

    r = 5
    while r * r <= limit:
        if res[r]:
            for x in range(r * r, limit + 1, r * r):
                res[x] = False
        r += 1

    return [index for index, value in enumerate(res) if value]

def pick_prime(primes, min_size=1000):
    """returns a prime greater than or equal to min_size"""
    for prime in primes:
        if prime >= min_size:
            return prime
    # no prime found, return largest in list
    return primes[-1]

def polynomial_rolling_hash(string, modulus):
    """implements polynomial rolling of string keys"""
    hash_value = 0
    p = 31  # A small prime number
    p_pow = 1
    for char in string:
        hash_value = (hash_value + (ord(char) - ord('a') + 1) * p_pow) % modulus
        p_pow = (p_pow * p) % modulus
    return hash_value

if __name__ == '__main__':
    # generate primes list
    primes = sieve(10000) # modify limit based on your needs
    modulus = pick_prime(primes, 1000)

    test_array = ["apples", "bananas", "oranges", "strawberries", "blueberries"]

    for string in test_array:
        hash_value = polynomial_rolling_hash(string, modulus)
        print(f"hash({string}) = {hash_value}")