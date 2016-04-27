#include <stdio.h>
#include <stdlib.h>

void							newfile(int i)
{
	char 						*file_name = (char *)malloc(sizeof(char) * 10);
	FILE						*file = NULL;

	file_name[9] = 0;
	sprintf(file_name, "Sully_%d.c", i);
	file = fopen(file_name, "w");
	fprintf(file, "Hello World\n");
}

int								main(void)
{
	int 						i = 5;

	while (i >= 0)
		newfile(i--);
	return(0);
}