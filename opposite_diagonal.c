// C program to find sum of opposite diagonal elements of a matrix
#include <stdio.h>
#define SIZE 3
int main()
{
    int A[SIZE][SIZE];
    int row, col, sum = 0;

    printf("Enter elements in matrix of size %dx%d: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            if(row+col == ((SIZE+1)-2))
            {
                sum += A[row][col];
            }
        }
    }

    printf("\nSum of minor diagonal elements = %d", sum);

    return 0;
}
