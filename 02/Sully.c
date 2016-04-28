#include <stdio.h>
#include <stdlib.h>
#define STR "int main(){return(0);}"
#define NEWSTR(size) (char *)malloc(sizeof(char) * size)

int								main(void)
{
	int 						i = 5;
	char						*file_name = NEWSTR(10);
	char 						*exec_name = NEWSTR(8);
	char 						*command = NEWSTR(54);
	while (i >= 0) {
		sprintf(file_name, "Sully_%i.c", i);
		sprintf(exec_name, "Sully_%i", i);
		FILE						*file = fopen(file_name, "w");
		fprintf(file, STR);
		fclose(file);
		sprintf(command, "clang -Wall -Wextra -Werror -o %s %s && ./%s", exec_name, file_name, exec_name);
		system(command);
		i--;
	}
	return(0);
}