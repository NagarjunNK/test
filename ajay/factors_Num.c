#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    printf("enter ny key");
    scanf("%d",&a);
    printf("the factors of no. %d is:\t",a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        printf("%d\t",i);
        
    }
    return 0;
}