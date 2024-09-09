class Inimigo:
    quantidade_vivos = 0  # Initialize the class variable to track alive enemies

    def __init__(self, id: int, X: int, Y: int, vivo: bool):
        self.id = id
        self.x = X
        self.y = Y
        self.vivo = vivo
        if vivo:  # If the enemy is initialized as alive, increment the counter
            Inimigo.quantidade_vivos += 1

    def foi_acertado(self, X: int, Y: int) -> None:
        if self.vivo and X == self.x and Y == self.y:
            self.vivo = False
            Inimigo.quantidade_vivos -= 1  # Decrement the counter when an enemy is hit and marked as dead

if __name__ == "__main__":
    n = int(input())
    inimigos = []

    for id in range(n):
        x, y = map(int, input().split())
        inimigos.append(Inimigo(id, x, y, True))

    m = int(input())
    for _ in range(m):
        x, y = map(int, input().split())
        for inimigo in inimigos:
            inimigo.foi_acertado(x, y)

    # Correctly print the number of alive and dead enemies
    print("vivos:", Inimigo.quantidade_vivos)
    print("mortos:", n - Inimigo.quantidade_vivos)