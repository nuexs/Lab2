#include <numeric>
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

void inputMatrix(vector<vector<int>> *matrix, int row, int col) {
	for (int i = 0; i < row; i++) {
		vector<int> rowVector;

		for (int j = 0; j < col; j++) {
			int n;
			scanf("%d", &n);
			rowVector.push_back(n);
		}

		(*matrix).push_back(rowVector);
	}
}

int main() {

	int row[2], col[2];

	printf("Input First Matrix Size n x m : ");
	scanf("%d %d", &row[0], &col[0]);

	printf("Input Second Matrix Size n x m : ");
	scanf("%d %d", &row[1], &col[1]);

	if (row[0] != row[1] || col[0] != col[1]) {
		printf("Cannot add because matrix size is different\n");
		exit(1);
	}
	
	vector<vector<int>> matrix1;
	vector<vector<int>> matrix2;

	printf("Input First Matrix Data : \n");
	inputMatrix(&matrix1, row[0], col[0]);

	printf("Input Second Matrix Data : \n");
	inputMatrix(&matrix2, row[1], col[1]);

	printf("Result : \n");
	for (int i = 0; i < row[0]; i++) {
		auto iter = begin(matrix1[i]);
		auto iter2 = begin(matrix2[i]);

		for ( ;iter != end(matrix1[i]); ++iter, ++iter2) {
			cout << (*iter) + (*iter2) << " ";
		}

		cout << endl;
	}

}
