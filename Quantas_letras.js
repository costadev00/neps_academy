const fs = require("fs");

let r = fs.readFileSync("entrada.txt","utf8");
let line  = r.split("\n");
let pal = line[0];
let cont = 0;
for(let i = 0; i < pal.length; i++){
    if(pal[i] == line[1]){	
        cont++;
    }
}
console.log(cont);