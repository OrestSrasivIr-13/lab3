#include <stdio.h>
  #define ROW 10
  #define COL 10
int nowa(int mat[5][5]);
void mean(int array[5][5])
main() {
        int mat[ROW][COL];
        int n=5;
        int i, j, k, l, tmp;

nowa(mat(row)(COL));
mean(array[5][5])

        system("pause");
  }
  void nowa(int mat [5][5]){
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
  void mean(int array[n][n])
{
  double sum, aValue;
  for (int j = 0; j < 4; j++)
  {
    sum = 0.0;
    for (int i = 0; i < 4 ; i++)
    {
      sum += array[i][j];
    }
    aValue = sum / 5;
    printf("\n average value is %lf \n", aValue);
  }
}
