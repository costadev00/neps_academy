const fs = require("fs");
let r = fs.readFileSync(0,"utf8");
let line  = r.split("\n");
let b = line[1];

let ans = 0;
b = b.replace(/\s/g, '');
let sz = b.length;
for(let i = 0; i < sz; i++){
    if(b[i]=='1')
    {
        if(b[i+1]=='0' && b[i+2]=='0')
        {
            ans++;
            i+=2;
        }
    }
}
console.log(ans);