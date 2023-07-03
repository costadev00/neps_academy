const fs = require("fs");
let r = fs.readFileSync(0,"utf8");
let line  = r.split("\n");

let sz = line[0].length;

//create a new string s
let s = "";
let j=0;
for(let i=0; i<sz; i++){
    // console.log(line[0][i]);
    if(line[0][i]=='a' || line[0][i]=='e' || line[0][i]=='i' || line[0][i]=='o' || line[0][i]=='u'){
        //insert line[0][i] on string s
        s = s.concat(line[0][i]);
        j++;
        // console.log("entrei"); 
    }
}
//reverse s
let s2 = "";
for(let i=j-1; i>=0; i--){
    s2 = s2.concat(s[i]);
}
if(s===s2)
    console.log("S");
else
    console.log("N");