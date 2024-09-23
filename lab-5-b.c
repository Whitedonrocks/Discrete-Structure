//Boolean matrix multiplication
#include<stdio.h>
int main()
{
    int m,n,x,y;
    printf("Enter the dimension of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the dimension of second matrix:\n");
    scanf("%d %d",&x,&y);
    int a[m][n],b[x][y];
     int c[m][y];
    printf("Enter the element of first matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element of Second matrix:\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    if(n!=x)
    {
        printf("Matrix multiplication can't be calculated");
    }
    else
    {
        printf("Product of two matrix is:\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<y;j++)
            {
                int sum=0;
                for(int k=0;k<n;k++)
                {
                    sum=sum||(a[i][k]&&b[k][j]);
                }
                c[i][j]=sum;
                printf("%d",c[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    }
    return 0;
}