#strings em python sao imutáveis
#logo nao é possivel alterar o valor de uma string por atribuicao
#pode ser defnido com aspas simples ou duplas

S = 'palavra ou frase'

#tamanho
print(len(S))

#troca de caracteres
print(S.replace('a','e'))

#split vai dividir a frase conforme o parametro que vc der, se nao passar nada, o padrao sera espaços em branco
print(S.split('a'))

#contem
print('a' in S)