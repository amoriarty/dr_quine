#include <stdio.h>
/* COMMENT */
#define OPEN FILE*file=fopen
#define CLOSE fclose(file)
#define F(x) int main(){OPEN("Grace_kid.c", "w");char*a="#include <stdio.h>%c/* COMMENT */%c#define OPEN FILE*file=fopen%c#define CLOSE fclose(file)%c#define F(x) int main(){OPEN(%cGrace_kid.c%c, %cw%c);char*a=%c%s%c;fprintf(file, a, 10, 10, 10, 10, 34, 34, 34, 34, 34, a, 34, 10, 10);CLOSE;return(0);}%cF(xxxx)%c";fprintf(file, a, 10, 10, 10, 10, 34, 34, 34, 34, 34, a, 34, 10, 10);CLOSE;return(0);}
F(xxxx)
