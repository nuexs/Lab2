/*
 * myPerror.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/* void perror(const char *s) */
void myPerror(const char *str){
	fprintf(stderr, "%s : %s\n", str, strerror(errno));
}

int main(int argc, char *argv[]){
	FILE *f;

	if(argc < 2){
		printf("Usage: myPerror file_name\n");
		exit(1);
	}

	if((f=fopen(argv[1], "r")) == NULL) {
		perror("fopen");
		exit(1);
	}

	printf("Open a file \"%s\".\n", argv[1]);

	fclose(f);
}
