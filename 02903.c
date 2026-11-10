//wrie a c program to perform addition of two matrix [1 2 3 4] 2*2 [1 1 1 1] 2*2
#include <stdio.h>
void main()
{
    int A[2][2],B[2][2],C[2][2],i,j;
    printf("Enter 4 values for matrix A:");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&A[i][j]);

    printf("Enter 4 values for matrix B:");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
        scanf("%d",&B[i][j]);

    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    C[i][j]=A[i][j]+B[i][j];

    printf("addition =\n");
    for (i=0;i<2;i++)
    {

     for(j=0;j<2;j++)
    printf("%d\t",C[i][j]);
    printf("\n");
    }
}
