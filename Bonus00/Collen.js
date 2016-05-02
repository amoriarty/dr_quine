/*OUTSIDE COMMENT*/
function a(){
}
(function main(){
	/*INSIDE COMMENT*/
	    console.log("/*OUTSIDE COMMENT*/\n"+a.toString()+"\n("+main.toString()+")()");
})()
