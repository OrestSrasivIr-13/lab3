#include <stdio.h>
#include <math.h>
#define n 5
void nowa(int mat[5][5]);
int enter(int mat[5][5]);
int printmat(int mat[5][5]);
void mean(int mat[5][5]);
main() {
	int mat[5][5];

	int i, j, k, l, tmp;

	enter(mat);
	nowa(mat);
	printmat(mat);
	mean(mat);
	system("pause");
}
void nowa(int mat[5][5]) {
	int i, j, k, l, tmp;
	/* sort the contents of the two dimensional array */
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			tmp = mat[i][j];
			l = j + 1;
			for (k = i; k < n; k++) {
				while (l < n) {
					/* swapping the data */
					if (tmp < mat[k][l]) {
						tmp = mat[k][l];
						mat[k][l] = mat[i][j];
						mat[i][j] = tmp;
					}
					l++;
				}
				l = 0;
			}
		}
	}
}
int enter(int mat[5][5]) {
	int i, j;
	/* get the matrix entries f6rom the user */
	printf("Enter your entries for the input mat:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

}
int printmat(int mat[5][5]) {
	/* print the result */
	int i, j;
	printf("\n");
	printf("Resultant Matrix:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("  %d ", mat[i][j]);
		}
		printf("\n");
	}

}
void mean(int mat[5][5])
{
	int i, j;
	double sum, aValue, geom = 1, d = 1;

	for (int j = 0; j < 5; j++)
	{
		sum = 0.0;
		for (int i = 0; i < 5; i++)
		{
			sum += mat[i][j];
		}
		aValue = sum / 5;
		printf("\n average value is %lf \n", aValue);
		d *= aValue;
		geom = pow(d, 0.2);
	}
	printf("geom = %lf \n", geom);
}