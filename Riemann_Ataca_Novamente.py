MAXN = 2000005
isPrime = [1] * MAXN
#sieve of Eratosthenes function
def sieve(n):
	isPrime[0] = isPrime[1] = 0

	cnt = 0
	for i in range(2, MAXN):
        #se o número não é primo, eu continuo
		if isPrime[i] == 0:
			continue
		cnt += 1
        #do contrário, i é primo e salvo sua posição em isPrime
		isPrime[i] = cnt
        #marco todo múltiplo de i como não primo
		for j in range(2*i, MAXN, i):
			isPrime[j] = 0
	return

#main function
def main():
    x = 1000005
    primes = sieve(x)
    n = int(input())
    for i in range(n):
        a = int(input())
        print(isPrime[a])

main()