#include <stdio.h>
void main()
{
    int a[100][100],b[100][100],c[100][100],row,col,row1,col1,i,j,k,sum;
    printf("Enter the order of the matrix A-");
    scanf("%d%d",&row,&col);
    printf("Enter the order of the matrix B-");
    scanf("%d%d",&row1,&col1);
    if (col==row1)
    {
    printf("Enter the element of matrix A\n");
    for ( i = 0; i<row; i++)
    {
        for ( j = 0; j<col; j++)
        {
            printf("Enter the value of element in [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of matrix B\n");
    for ( i = 0; i<row1; i++)
    {
        for ( j = 0; j <col1; j++)
        {
            printf("Enter the value of element in [%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for ( i = 0; i<row; i++)
    {
        for ( j = 0; j<col1; j++)
        {
            sum=0;
            for ( k = 0; k < col; k++)
            {
                sum +=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
    printf("The value of the multiplication of two matrices is -\n");
    for ( i = 0; i<row; i++)
    {
        for ( j = 0; j<col1; j++)
        {
            printf("%d\t",c[i][j]);
        }   
        printf("\n"); 
    }
    }
    else
    {
        printf("The given matrices cannot be multiply");
    }
}