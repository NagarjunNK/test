
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
    int result=1,i;
    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    return result;
}
