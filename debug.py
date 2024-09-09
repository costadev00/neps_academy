<<<<<<< Updated upstream
=======
class Competidor:
    def __init__(self,nome,idade,sexo):
        self.nome = nome
        self.idade = idade
        self.sexo = sexo
        if sexo !="F":
            self.classificado = False
        else:
            self.classificado = True    
    def __fodase__(self):
        print("Fodase")

p = Competidor("Ana", 20, "F")
print("Nome:", p.nome)
print("Idade", p.idade)
print("Classificado:", p.classificado)
p.__fodase__()


arr = [1,2,3,4,5]
target = 7

i=0
j=len(arr)-1
while i<j:
    if arr[i]+arr[j] == target:
        print(arr[i],arr[j])
        i+=1
        j-=1
        break
    elif arr[i]+arr[j] > target:
        j-=1
    else:
        i+=1
print("Fim")
>>>>>>> Stashed changes
