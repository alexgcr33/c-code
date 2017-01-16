#include <stdio.h>
#include <stdlib.h>

int main () {

	int nombre[] = {65, 76, 69, 88, 65, 78, 68 ,82 ,79 ,0};	

	for(int i = 0; i < sizeof(nombre)/sizeof(int); i++)
		printf(" %c", nombre[i]);	

	printf(" \n");
	return EXIT_SUCCESS;
}
