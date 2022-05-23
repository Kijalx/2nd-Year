#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    // 2D ARRAY
    int disp[3][3];
    // COUNTER + VARIABLES
    int i, j, sum;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter values for Matrix[%d][%d]:", i, j);
            scanf("%d", &disp[i][j]);
        }
    }
    //DISPLAY OF ARRAY
    printf("Matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", disp[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    sum = disp[0][0] + disp[1][1] + disp[2][2];
    printf("The sum of the diagonal is : %i", sum);
}
