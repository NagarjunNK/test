
#include <stdio.h>
#include<math.h>
//function protype(declaration)
int fact(int n);

int main()
{
    int a,sum;
    printf("enter any number:");
    scanf("%d",&a);
    sum=fact(a);
    printf("result=%d",sum);
    return 0;
}

int fact(int n)
{
    if(n==1)
    return n;
    else
    return n*fact(n-1);
}
