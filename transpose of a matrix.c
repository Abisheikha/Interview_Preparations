#include <stdio.h>
int main() 
{
    int arr[10][10], transpose[10][10], row, column, i, j;
    printf("Enter rows and columns for a matrix: ");
    scanf("%d %d", &row, &column);
    printf("Enter elements of matrix\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++) 
		{
            scanf("%d", &arr[i][j]);
        }
	}
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
	    {
            printf("%d  ", arr[i][j]);
    	}
        printf("\n");
    }
    for (i=0;i<row;i++)
    {
	    for (j=0; j<column; ++j)
	    {
            transpose[j][i] = arr[i][j];
        }
	}
    printf("Transpose of the given matrix is:\n");
    for (i = 0;i<column;i++)
    {
        for (j=0;j<row;j++)
		 {
            printf("%d  ", transpose[i][j]);
     	}
        printf("\n");
     }
    return 0;
}
