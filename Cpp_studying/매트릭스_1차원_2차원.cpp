#include <iostream>

using namespace std;

int main() {

	const int row = 3;
	const int col = 5;

	const int arr[row][col] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
	};

	// 이중 포인터 이용해서 2차원 배열
	/*int *row1 = new int[col] {1, 2, 3, 4, 5};
	int *row2 = new int[col] {6, 7, 8, 9, 10};
	int *row3 = new int[col] {6, 7, 8, 9, 10};

	int **rows = new int*[row] {row1, row2, row3};

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << rows[r][c] << " ";
		}
		cout << endl;
	}*/

	int *mat = new int[row * col]; // 1차원 행렬을 2차원처럼

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			mat[c + r * col] = arr[r][c];
		}
	}

	// mat 출력
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << mat[c + r * col] << " ";
		}

		cout << endl;
	}

	delete[] mat;

	return 0;
}