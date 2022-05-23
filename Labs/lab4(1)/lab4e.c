#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    // 2D ARRAY
    int disp[2][2], sdisp[2][2], multi[2][2];
    // COUNTER + VARIABLES
    int row, col, sum;
    int rown = 2, coln = 2;
    int i, j, k;
    for (row = 0; row < rown; row++) { //ENTERING DETAILS FOR MATRIX 1
        for (col = 0; col < coln; col++) {
            printf("Enter values for Matrix 1 [%d][%d]:", row, col);
            scanf("%d", &disp[row][col]);
        }
    }
    for (row = 0; row < rown; row++) { //ENTERING DETAILS FOR MATRIX 2
        for (col = 0; col < coln; col++) {
            printf("Enter values for Matrix 2[%d][%d]:", row, col);
            scanf("%d", &sdisp[row][col]);
        }
    }
    printf("Matrix 1 is:\n"); //DISPLAYING MATRIX 1
    for (row = 0; row < rown; row++)
    {
        for (col = 0; col < coln; col++)
        {
            printf("%d ", disp[row][col]);
            if (col == 1)
            {
                printf("\n");
            }
        }
    }
    printf("Matrix 2 is:\n"); //DISPLAYING MATRIX 2
    for (row = 0; row < rown; row++)
    {
        for (col = 0; col < coln; col++)
        {
            printf("%d ", sdisp[row][col]);
            if (col == 1)
            {
                printf("\n");
            }
        }
    }
    for (i = 0; i < 2; i++) { //MULTIPLICATION OF MATRICES
        for (j = 0; j < 2; j++) {
            multi[i][j] = 0;
            for (k = 0; k < 2; k++) {
                multi[i][j] += disp[i][k] * sdisp[k][j];
            }

        }
    }
    for (row = 0; row < rown; row++)
    {
        for (col = 0; col < coln; col++)
        {
            printf("%d ", multi[row][col]);
            if (col == 1)
            {
                printf("\n");
            }
        }
    }
}

