#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include "oper.h"

int main(){
	void *handler;
	char *str = (char *)malloc(20*sizeof(char));
	int n1, n2;

	handler = dlopen("./libdynamic.so", RTLD_LAZY);

	if(!handler){
		fputs(dlerror(), stderr);
		exit(1);
	}

	printf("Input Operate Type : ");
	scanf(" %s", str);

	printf("Input Two Numbers : ");
	scanf("%d %d", &n1, &n2);

	int result = 0;
	if(strcmp(str, "add") == 0){
		int (*add)(int,int) = dlsym(handler, "add");

		result = (*add)(n1,n2);
	}
	else if(strcmp(str, "subtract") == 0){
		int (*sub)(int,int) = dlsym(handler, "subtract");

		result = (*sub)(n1,n2);
	}
	else if(strcmp(str, "multiply") == 0){
		int (*mul)(int,int) = dlsym(handler, "multiply");

		result = (*mul)(n1,n2);
	}
	else if(strcmp(str, "divide") == 0){
		int (*div)(int,int) = dlsym(handler, "divide");

		result = (*div)(n1,n2);
	}
	else{
		printf("InputMissMatchException\n");
		return -1;
	}

	printf("%s result is %d\n", str, result);
	dlclose(handler);
	free(str);
}



