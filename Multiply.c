#include <stdio.h>

int main(void)
{
    int r1 = 0 , c1 = 0 ,r2 = 0, c2 = 0;
    float mat1[r1][c1];
    float mat2[r2][c2];
    float resMat[r1][c2];

    printf("\nMatrix 1 :: \n");
    printf("-------------\n\n");

    printf("Please enter the number of rows : ");  //receive the number of rows
    scanf("%d", &r1);

    printf("Please enter the number of columns : ");  //receive the number of columns
    scanf("%d", &c1);

    printf("\nMatrix 2 :: \n");
    printf("-------------\n\n");

    printf("Please enter the number of rows : ");  //receive the number of rows
    scanf("%d", &r2);

    printf("Please enter the number of columns : ");  //receive the number of columns
    scanf("%d", &c2);

    if(c1 == r2)
    {
        printf("\nPlease enter the elements of matrix A\n");
        printf("----------------------------------------\n\n");

        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                printf("element = [%d][%d] : ", i + 1, j + 1);
                scanf("%f",&mat1[i][j]);
            }
        }

        printf("\nPlease enter the elements of matrix B\n");
        printf("----------------------------------------\n\n");

        for(int i = 0; i < r2; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                printf("element = [%d][%d] : ", i + 1, j + 1);
                scanf("%f",&mat2[i][j]);
            }
        }

        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                resMat[i][j]=0;
                for(int k = 0; k < r2; k++)
                {
                    resMat[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        printf("\nThe product of two matrices is :: \n\n");
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                printf("%.f\t",resMat[i][j]);
            }

        printf("\n");
        }
    }

    else
        printf("\nCan't multiply matrices\n");
}
