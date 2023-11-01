#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "oper.h"

int main(){
	char *str = (char *)malloc(20*sizeof(char));
	int n1, n2;

	printf("Input Operate Type : ");
	scanf(" %s", str);

	printf("Input Two Numbers : ");
	scanf("%d %d", &n1, &n2);

	int result = 0;
	if(strcmp(str, "add") == 0){
		result = add(n1, n2);
	}
	else if(strcmp(str, "subtract") == 0){
		result = subtract(n1, n2);
	}
	else if(strcmp(str, "multiply") == 0){
		result = multiply(n1, n2);
	}
	else if(strcmp(str, "divide") == 0){
		result = divide(n1, n2);
	}
	else{
		printf("InputMissMatchException\n");
		return -1;
	}

	printf("%s result is %d\n", str, result);
}




