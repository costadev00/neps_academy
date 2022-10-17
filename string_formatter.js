//Entretanto, essa forma não é a mais usual e prática que existe, pois com muitas variáveis e textos a serem impressos, seu entendimento se torna confuso. A partir disso, existem as formatted strings, que são uma forma de imprimir variáveis dentro de uma string.
//Para isso, no lugar das aspas, é colocado o símbolo do acento grave ``,
//e quando quiser colocar uma variável no meio, coloca-se ${nome_variavel}.

const nome = 'João';
const idade = 20;
const cidade = 'São Paulo';
const profissao = 'Programador';
console.log(`Meu nome é ${nome}, tenho ${idade} anos, moro em ${cidade} e sou ${profissao}.`);