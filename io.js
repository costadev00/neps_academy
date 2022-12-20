// O módulo fs vem padrão com o Node.js e é responsável pela leitura de arquivos em seu computador. Seja em .txt, .csv, entre outros tipos.
// Importando o módulo
const fs = require("fs");

// Lendo o conteúdo da linha de comando
let leitura = fs.readFileSync(0, "utf8");
let a = parseInt(leitura[0]);
let b = parseInt(leitura[2]);
console.log(a+b);
