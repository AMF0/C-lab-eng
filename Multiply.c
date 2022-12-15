#include <stdio.h>
#define MAX 50

int main(void)
{
    int r1 = 0 , c1 = 0 ,r2 = 0, c2 = 0, tmp = 0;
    float mat1[MAX][MAX];
    float mat2[MAX][MAX];
    float resMat[MAX][MAX];

    printf("\nMatrix 1 :: \n");
    printf("-------------\n\n");

    printf("Please enter the number of rows : ");  //receive the number of rows for first matrix
    scanf("%d", &r1);

    printf("Please enter the number of columns : ");  //receive the number of columns for first matrix
    scanf("%d", &c1);

    printf("\nMatrix 2 :: \n");
    printf("-------------\n\n");

    printf("Please enter the number of rows : ");  //receive the number of rows for second matrix
    scanf("%d", &r2);

    printf("Please enter the number of columns : ");  //receive the number of columns for second matrix
    scanf("%d", &c2);

    if(c1 == r2)  //checking matrix multiplication conditions.
    {
        printf("\nPlease enter the elements of matrix A\n");   //matrix a elements
        printf("----------------------------------------\n\n");

        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                printf("element = [%d][%d] : ", i + 1, j + 1);
                scanf("%f",&mat1[i][j]);
            }
        }

        printf("\nPlease enter the elements of matrix B\n");  //matrix b elements
        printf("----------------------------------------\n\n");

        for(int i = 0; i < r2; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                printf("element = [%d][%d] : ", i + 1, j + 1);
                scanf("%f",&mat2[i][j]);
            }
        }
        //performing multiplication.
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                tmp = 0;
                for(int k = 0; k < c1; k++)
                {
                    tmp += mat1[i][k] * mat2[k][j];
                }
                resMat[i][j] = tmp;
                tmp = 0;

            }
        }

        printf("\nThe product of two matrices is :: \n\n");
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                printf("%.f\t", resMat[i][j]);
            }

        printf("\n");
        }
    }

    else
        printf("\nCan't multiply matrices\n");
}
