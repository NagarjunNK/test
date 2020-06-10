
#include <stdio.h>
#include<math.h>

int main()
{
    int a[20][20],b[20][20],A[20][20],c[20][20],m[20][20]={0},i,j,n1,m1,n2,m2,k;
    printf("Enter the no. of rows nd columns for 1st matrix:");
    scanf("%d %d",&n1,&m1);
    printf("\nEnter the no. of rows nd columns for 2nd matrix:");
    scanf("%d %d",&n2,&m2);
    printf("\nEnter the 1st matrix elements:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the 2nd matrix elements:\n");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n1st Matrix is:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n2nd Matrix is:\n");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //to add the two matrices
    if(n1!=n2 || m1!=m2)
    {
        printf("[ERROR] Can't be added:\n");
    }
    else
    {
    printf("\nResult=\n");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
    //to find the transpose of matrix
    printf("\nthe transpose of 1st matrix is A[][]:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            A[i][j]=a[j][i];
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    //multiplication of two matrices
    if(m1==n2)
    {
        for(i=0;i<n1;i++)
        {
           for(j=0;j<m2;j++)
            {
               for(k=0;k<m1;k++)
               {
                   m[i][j]+=a[i][k]*b[k][j];
               }
            }
        }
        printf("The multiplication of a nd b matrix is:\n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
               printf("%d\t",m[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("[ERROR]Can't be multiplied;");
    }
    return 0;
}
