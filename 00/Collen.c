#include <stdio.h>
/* OUTER COMMENTS */
void nothing(){}
int main(){/* INSIDE COMMENT */char*a="#include <stdio.h>%c/* OUTER COMMENTS */%cvoid nothing(){}%cint main(){/* INSIDE COMMENT */char*a=%c%s%c;printf(a, 10, 10, 10, 34, a, 34, 10);return(0);}%c";printf(a, 10, 10, 10, 34, a, 34, 10);return(0);}
