class Personagem:
    def __init__(self, nome: str, ataque: int, defesa: int, vida: int):
        self.nome = nome
        self.ataque = ataque
        self.defesa = defesa
        self.vida = vida

    def sobreviveu(self,dano)->bool:
        dano = dano - self.defesa
        self.vida = self.vida- dano

        if self.vida >0:
            return True
        return False

if __name__ == "__main__":

    nome = input()
    ataque = int(input())
    defesa = int(input())
    vida = int(input())

    p = Personagem(nome, ataque, defesa, vida)

    dano = int(input())

    if p.sobreviveu(dano):
        print(f"{p.nome} sobreviveu!!!")
    else:
        print(f"{p.nome} morreu :(")
