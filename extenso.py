def numero_por_extenso(numero):
    unidades = ["", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"]
    teens = ["", "onze", "doze", "treze", "catorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"]
    dezenas = ["", "dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"]
    centenas = ["", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"]

    if numero == 0:
        return "zero"
    
    extenso = ""

    # Lida com os milhões
    milhoes = numero // 1000000
    if milhoes > 0:
        extenso += numero_por_extenso(milhoes) + " milhão"
        if milhoes > 1:
            extenso += "s"
        numero %= 1000000
        if numero > 0:
            extenso += " e "

    # Lida com os milhares
    milhares = numero // 1000
    if milhares > 0:
        extenso += numero_por_extenso(milhares) + " mil"
        numero %= 1000
        if numero > 0:
            extenso += " e "

    # Lida com as centenas
    centena = numero // 100
    if centena > 0:
        if centena == 1 and numero % 100 != 0:
            extenso += "cento"
        else:
            extenso += centenas[centena]
        numero %= 100
        if numero > 0:
            extenso += " e "

    # Lida com as dezenas e unidades
    if numero > 0:
        if numero < 10:
            extenso += unidades[numero]
        elif numero < 20:
            extenso += teens[numero - 10]
        else:
            dezena = numero // 10
            extenso += dezenas[dezena]
            numero %= 10
            if numero > 0:
                extenso += " e " + unidades[numero]

    return extenso

numero = 100000
extenso = numero_por_extenso(numero)
print(extenso)
