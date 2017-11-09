let i = 5;
const fs = require('fs');
const cp = require('child_process');

(function foo() {
if (i < 1)
return (0);
if (fs.existsSync("Sully_" + i + ".js"))
i--;
fs.writeFileSync("Sully_" + i + ".js", "let i = " + i + ";\nconst fs = require('fs');\nconst cp = require('child_process');\n\n(" + foo.toString() + ")();\n");
cp.execSync("node Sully_" + i + ".js");
})();
