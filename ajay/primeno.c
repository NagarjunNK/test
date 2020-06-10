#include<stdio.h>
#include<math.h>
int main()
{
    int a,count=0,i;
    printf("enter any no.");
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        count++;
    }
    if(a==1)
    {
        printf("1 is not ah prime or composite");
    }
    else
    {
        if(count==1)
        {
            printf(" is a prime");
            
        }
        else
        printf(" not a prime no.");
    }
    return 0;
}
