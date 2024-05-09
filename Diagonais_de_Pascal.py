#diagonal de pascal
n = int(input())
#imprima a soma da n-esima diagonal do triangulo de pascal módulo 10^9+7
fibo = [0,1]
mod = 10**9+7

for i in range(2,n+1):
  fibo.append((fibo[i - 1] + fibo[i - 2]) % mod)
print(fibo[-1])

