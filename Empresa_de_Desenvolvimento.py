class Projeto:
    def __init__(self, requisito_programacao, requisito_design):
        self.requisito_programacao = requisito_programacao
        self.requisito_design = requisito_design


class Empregado:
    def __init__(self, valor_por_projeto, valor_recebido):
        self.__valor_por_projeto = valor_por_projeto
        self.__valor_recebido = valor_recebido

    @property
    def valor_recebido(self):
        return self.__valor_recebido

    # Um empregado normal não é capaz de entregar nenhum projeto :(
    def capaz(self, projeto: Projeto) -> bool:
        return False

    def receber_recompensa(self) -> None:
        self.__valor_recebido += self.__valor_por_projeto


class Programador(Empregado):
    # TODO: Complete o código do construtor inicializando os valores corretamente.
    def __init__(self, valor_por_projeto: int, habilidade_programacao: int):
        super().__init__(valor_por_projeto, 0)
        self.__habilidade_programacao = habilidade_programacao
    

    # TODO: Um programador deve ser capaz de entregar um projeto se sua habilidade de programação é maior que o requisito de programação do projeto.
    def capaz(self, projeto: Projeto) -> bool:
        # print(self.__habilidade_programacao, projeto.requisito_programacao)
        if self.__habilidade_programacao >= projeto.requisito_programacao:
            return True
        return False



class Designer(Empregado):
    # TODO: Complete o código do construtor inicializando os valores corretamente.
    def __init__(self, valor_por_projeto: int, habilidade_design: int):
        super().__init__(valor_por_projeto, 0)
        self.__habilidade_design = habilidade_design


    # TODO: Um designer deve ser capaz de entregar um projeto se sua habilidade de design é maior que o requisito de design do projeto.
    def capaz(self, projeto: Projeto) -> bool:
        if self.__habilidade_design >= projeto.requisito_design:
            return True
        return False


if __name__ == "__main__":

    valor, habilidade = map(int, input().split())
    programador = Programador(valor, habilidade)

    valor, habilidade = map(int, input().split())
    designer = Designer(valor, habilidade)
    n = int(input())
    for i in range(n):
        programacao, design = map(int, input().split())
        projeto = Projeto(programacao, design)
        if programador.capaz(projeto) and designer.capaz(projeto):
            programador.receber_recompensa()
            designer.receber_recompensa()
        
    print("Programador: R$",programador.valor_recebido)
    print("Designer: R$",designer.valor_recebido)