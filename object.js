var user = {} // Criando objeto de usuário
//essa forma de declarar um objeto é chamada de objeto literal(ou object literal notation)

// Todo usuário tem o que? Um nome, uma foto de perfil,
// uma bio, número de exercícios resolvidos, etc...

user.name = "Antônio" // Criando uma propriedade 'name' e atribuindo o valor a ela
user.pathPicture = "image-antonio.png" // Propriedade que guarda o caminho da foto de perfil
user.bio = "I'm a programming enthusiast, without a specific niche, I like everything 😄😄😄" // Propriedade da bio do perfil
user.numberSolvedExercises = 325 // Número de exercícios resolvidos

console.log(user);
/* 
Saída:
  {
    name: 'Antônio',
    pathPicture: 'image-antonio.png',
    bio: "I'm a programming enthusiast, without a specific niche, I like everything 😄😄😄
    numberSolvedExercises: 325
  }
*/

// Outra forma de criação de um objeto é já atribuir as propriedades na criação dele. Dessa forma, ao invés de definir inicialmente como vazio, dentro das 
// { }, é colocado os atributos, separados por vírgula.
// Criando o objeto com as propriedades já estabelecidas
var user = {
    name: "Antônio", // Propriedade do nome do usuário
    pathPicture: "image-antonio.png", // Caminho o qual guarda a foto de perfil
    bio: "I'm a programming enthusiast, without a specific niche, I like everything 😄😄😄", // Bio do perfil
    numberSolvedExercises: 325 // Número de exercícios resolvidos
  }
  

  // Criando a variável com a propriedade a ser lida
var property = "name";

// Verificando se a propriedade existe
if(user[property] !== undefined) {
  console.log("Exist!");
  // Código da aplicação
}


// Percorrendo todas as propriedades do objeto 'user'
for(let property in user)
  console.log(user[property]); // Imprimindo os atributos das propriedades

/*
Saída:
  Antônio
  image-antonio.png
  I'm a programming enthusiast, without a specific niche, I like everything 😄😄😄
  325
*/

