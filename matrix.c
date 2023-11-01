#include <stdio.h>
#include <stdlib.h>

int main() {
	int row[2], col[2];

	printf("Input First Matrix Size n x m : ");
	scanf("%d %d", &row[0], &col[0]);

	printf("Input second Matrix Size n x m : ");
	scanf("%d %d", &row[1], &col[1]);

	if (row[0] != row [1] || col[0] != col[1]) {
	printf("Cannot add because matrix size is different\n");
		exit(1);
	}

	int **matrix[2];

	for(int i = 0; i < 2; i++) {
		matrix[i] = (int **)malloc(sizeof(int*) * row[i]);
		for (int j = 0; j < row[i]; j++) {
			matrix[i][j] = (int*)malloc(sizeof(int) * col[i]);
		}
	}

	printf("Input Fist Matrix Data : \n");
	for (int i = 0; i < row[0]; i++) {
		for (int j = 0; j < col[0]; j++) {
			scanf("%d", &matrix[0][i][j]);
		}
	}
	
	printf("Input Second Matrix Data : \n");
	for (int i = 0; i < row[1]; i++) {
		for(int j = 0; j < col[1]; j++) {
			scanf("%d", &matrix[1][i][j]);
		}
	}

	printf("Result : \n");
	for (int i = 0; i < row[0]; i++) {
		for (int j = 0; j < col[0]; j++) {
			printf("%d ", matrix[0][i][j] + matrix[1][i][j]);
		}
		printf("\n");
	}

	return 0;
}
