class MyClass:
    # criando um constructor, o self significa que é a atribuição pertence a instancia
    def __init__(self, name, age):
        self.name = name
        self.age = age
    a = "Eu sou um atributo estatico"

    def hello():  # método estático
        print("Olá a todos, eu sou a classe MyClass")
        # Não é possível acessar o self.B aqui
    # Por padrão, todos os atributos e métodos são públicos.
    # Entretanto, você pode indicar que um atributo ou método
    # é privado usando __ no início do nome do atributo ou método.

    def __private_method(self):  # método privado
        print("Eu sou um método privado")

print(MyClass.a)
# criando um objeto
obj = MyClass("Rafael", 25)
