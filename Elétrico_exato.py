# Leia as coordenadas iniciais e de destino e a quantidade inicial de carga elétrica
start = [int(x) for x in input().split()]
destination = [int(x) for x in input().split()]
charge = int(input())

# Calcule a diferença absoluta entre as coordenadas x e y
diff_x = abs(start[0] - destination[0])
diff_y = abs(start[1] - destination[1])

# Verifique se a quantidade inicial de carga elétrica é maior ou igual à distância mínima
if charge >= (diff_x + diff_y):
    # Calcule a soma das coordenadas x e y
    sum_coordinates = sum(start + destination)
    
    # Se a soma das coordenadas e a quantidade inicial de carga elétrica tiverem a mesma paridade, imprima 'Y'
    if sum_coordinates % 2 == charge % 2:
        print("Y")
    else:
        print("N")
else:
    print("N")

