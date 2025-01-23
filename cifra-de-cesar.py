

def caesarCipher(s, k):
    result = ""
    for i in s:
        if i.isalpha():
            if i.islower():
                result += chr((ord(i) - 97 + k) % 26 + 97)
            else:
                result += chr((ord(i) - 65 + k) % 26 + 65)
        else:
            result += i
    return result

def decripty_brute_force(s):
    for i in range(26):
        print(i ,caesarCipher(s, i))

s = "meet me after the toga party"
k = 3
m = caesarCipher(s, k)

decripty_brute_force(m)