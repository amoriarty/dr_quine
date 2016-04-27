#include <stdio.h>
/* COMMENT */
int main(){FILE *file = fopen("Grace_kid.c", "w");char*a="#include <stdio.h>%c/* COMMENT */%cint main(){FILE *file = fopen(%cGrace_kid.c%c, %cw%c);char*a=%c%s%c;fprintf(file, a, 10, 10, 34, 34, 34, 34, 34, a, 34, 10);fclose(file);return(0);}%c";fprintf(file, a, 10, 10, 34, 34, 34, 34, 34, a, 34, 10);fclose(file);return(0);}
