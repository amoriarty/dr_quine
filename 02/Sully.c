#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NEWSTR(size) (char*)malloc(sizeof(char)*size)
#define STR "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#define NEWSTR(size) (char*)malloc(sizeof(char)*size)%c#define STR %c%s%c%cint main(int ac, char **av){%c(void)ac;%cint i=%d;%cif(i==0)%creturn 0;%cif (strchr(av[0], %c_%c))%ci--;%cchar*file_name=NEWSTR(10),*exec_name=NEWSTR(8),*command=NEWSTR(54);%csprintf(file_name,%cSully_%ci.c%c,i);%csprintf(exec_name,%cSully_%ci%c,i);%cFILE*file=fopen(file_name,%cw%c);%cfprintf(file,STR,10,10,10,10,34,STR,34,10,10,10,i,10,10,10,39,39,10,10,10,34,37,34,10,34,37,34,10,34,34,10,10,10,34,37,37,37,34,10,10,10);%cfclose(file);%csprintf(command,%cclang -Wall -Wextra -Werror -o %cs %cs && ./%cs%c,exec_name,file_name,exec_name);%csystem(command);%creturn(0);}%c"
int main(int ac, char **av){
(void)ac;
int i=5;
if(i==0)
return 0;
if (strchr(av[0], '_'))
i--;
char*file_name=NEWSTR(10),*exec_name=NEWSTR(8),*command=NEWSTR(54);
sprintf(file_name,"Sully_%i.c",i);
sprintf(exec_name,"Sully_%i",i);
FILE*file=fopen(file_name,"w");
fprintf(file,STR,10,10,10,10,34,STR,34,10,10,10,i,10,10,10,39,39,10,10,10,34,37,34,10,34,37,34,10,34,34,10,10,10,34,37,37,37,34,10,10,10);
fclose(file);
sprintf(command,"clang -Wall -Wextra -Werror -o %s %s && ./%s",exec_name,file_name,exec_name);
system(command);
return(0);}
