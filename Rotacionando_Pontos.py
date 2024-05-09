# Dado um ponto P e um ângulo θ (em radianos), sua tarefa é achar as coordenadas do ponto P rotacionado por θ graus no sentido anti-horário em relação a origem.
#
# Entrada
# A entrada contém uma linha com três números indicando as coordenadas de P e o angulo θ
#
# Saída
# A saída deve conter dois números reais indicando as coordenadas do ponto desejado.Sua resposta é considerada correta se o erro absoluto ou relativo não exceder 10^-3.
#Formalmente seja a sua resposta e b a resposta do juiz, sua resposta é considerada correta se |a-b|/max(1,|b|) <= 10^-3

import math
x, y, theta = input().split()
x = float(x)
y = float(y)
theta = float(theta)
x_rot = x*math.cos(theta) - y*math.sin(theta)
y_rot = x*math.sin(theta) + y*math.cos(theta)
print(f'{x_rot:.6f} {y_rot:.6f}')
