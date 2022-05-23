#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    // 2D ARRAY
    int disp[2][2];
    float invdisp[2][2];
    // COUNTER + VARIABLES
    int i, j;
    float inv = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter values for Matrix[%d][%d]:", i, j);
            scanf("%d", &disp[i][j]);
        }
    }
    //DISPLAY OF ARRAY
    printf("Matrix is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", disp[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }
    // GETTING THE INVERSE
    inv = (disp[0][0] * disp[1][1] - disp[1][0] * disp[0][1]);
    inv = 1 / inv;
    // INVERSING NUMBERS IN MATRIX
    invdisp[0][0] = disp[1][1] * inv;
    invdisp[1][1] = disp[0][0] * inv;
    invdisp[1][0] = (disp[1][0] * -1) * inv;
    invdisp[0][1] = (disp[0][1] * -1) * inv;
    // DISPLAYING INVERSE OF MATRIX
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%.2f ", invdisp[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }
    printf("%.2f", inv);
}