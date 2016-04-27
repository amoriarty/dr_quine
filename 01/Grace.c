#include <stdio.h>
/* COMMENT */
#define F(x) int main(){FILE *file = fopen("Grace_kid.c", "w");char*a="#include <stdio.h>%c/* COMMENT */%c#define F(x) int main(){FILE *file = fopen(%cGrace_kid.c%c, %cw%c);char*a=%c%s%c;fprintf(file, a, 10, 10, 34, 34, 34, 34, 34, a, 34, 10, 10);fclose(file);return(0);}%cF(xxxx)%c";fprintf(file, a, 10, 10, 34, 34, 34, 34, 34, a, 34, 10, 10);fclose(file);return(0);}
F(xxxx)
