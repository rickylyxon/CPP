#include <stdio.h>
void main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,row,col,row1,col1,sum=0;
    printf("Enter The order of the matrix A ");
    scanf("%d%d",&row,&col);
    printf("Enter The order of the matrix B ");
    scanf("%d%d",&row1,&col1);
    if (col==row1)
    {
    printf("\nEnter the value of the elements in matrix A\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j< col; j++)
        {
            printf("Enter the value of the element in [%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\nEnter the value of the elements in matrix B\n");
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j< col1; j++)
        {
            printf("Enter the value of the element in [%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col1 ; j++)
        {
            for ( k = 0; k < col; k++)
            {
                sum+=a[i][k]*b[k][j];
                c[i][j]=sum;   
            }
            
        }
        
    }
    printf("\nThe multiplication of two matrices is \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col1 ; j++)
        {
            printf("%d\t",c[i][j]);
        }    
        printf("\n");
    }
    
    }
    else
    {
        printf("\nThe given order of the matrices cannot be multiply\n");
    }
}