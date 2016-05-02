var fs = require("fs");
var cp = require("child_process");

(function fuck(){
	var i = 5;
	if (i == 0)
		return ;
	var str;
	if (process.argv[1].search("Sully.js") != -1)
		str = fuck.toString();
	else
		str = fuck.toString().replace("var i = " + i, "var i = " + (--i));
	fs.writeFileSync("Sully_" + i + ".js", "var fs = require(\"fs\");\nvar cp = require(\"child_process\");\n\n(" + str + ")()\n");
	cp.execSync("node Sully_" + i + ".js");
})()
