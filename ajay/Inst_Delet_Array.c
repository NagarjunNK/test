
#include <stdio.h>
#include<math.h>
int main()
{
    int a[10],a1[10],n,i,n1,N,b;
    printf("enter the no. of elments in array");
    scanf("%d",&N);
    printf("enter the elment in array:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe array entered:\t");
    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the index location of element to be deleted:");
    scanf("%d",&n);
    //to delete the element for given location
    for(i=n-1;i<N-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("The alterd array list is:");
    for(i=0;i<N-1;i++)
    {
        printf("%d\t",a[i]);
    }
    
    //to insert the given element in the given location
    printf("\nEnter the index location of element to be inserted:");
    scanf("%d",&n1);
    printf("enter the element to be inserted:");
    scanf("%d",&b);
    //swap elements from last index
    for(i=N-1;i>=n1;i--)
    {
        a[i]=a[i-1];
    }
    a[n1-1]=b;
    printf("The inserted array:");
    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
    
}