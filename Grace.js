var fs = require('fs');
/*
    Coucou
*/
const def1='hello';
const def2=42;
const def3=Array(0);

(function run() {
    fs.writeFileSync("Grace_kid.js", "var fs = require('fs');\n/*\n    Coucou\n*/\nconst def1='hello';\nconst def2=42;\nconst def3=Array(0);\n\n(" + run.toString() + ")();\n");
})();
