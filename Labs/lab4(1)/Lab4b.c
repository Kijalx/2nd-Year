#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    // 2D ARRAY
    int row, col;
    int array[2][2], arraytwo[2][2], arraytotal[2][2];
    int rown = 2, coln = 2;

    //COUNTER VARIABLES
    printf("Enter values for Matrix 1:\n");
    for (row = 0; row < rown; row++) {
        for (col = 0; col < coln; col++)
        {
            printf("Array 1 - [%d][%d]: ", row, col);
            scanf(" %d", &array[row][col]);
        }
        printf("\n");
    }
    //SECOND MATRIX
    printf("Enter values for matrix 2:\n");
    for (row = 0; row < rown; row++) {
        for (col = 0; col < coln; col++)
        {
            printf("Array 2 - [%d][%d]: ", row, col);
            scanf(" %d", &arraytwo[row][col]);
        }
        printf("\n");
    }
    //EXTRA FOR MATRIX
    for (row = 0; row < rown; row++)
    {
        for (col = 0; col < coln; col++)
        {
            arraytotal[row][col] = array[row][col] + arraytwo[row][col];
        }
        printf("\n");
    }

    //DISPLAY OF ARRAY
    printf("The first matrix is:\n");
    for (row = 0; row < rown; row++)
    {
        for (col = 0; col < coln; col++)
        {
            printf("%d  ", array[row][col]);
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
    for (row = 0; row < rown; row++)
    {
        for (col = 0; col < coln; col++)
        {
            printf("%d  ", arraytwo[row][col]);
        }
        printf("\n");
    }
    //PRINTING OF EXTRA ARRAY
    printf("The addition of two matrix is:\n");
    for (row = 0; row < rown; row++)
    {
        for (col = 0; col < coln; col++) {
            printf("%d  ", arraytotal[row][col]);
        }
        printf("\n");
    }
    return 0;
}
