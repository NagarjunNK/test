
#include <stdio.h>
#include<math.h>

int main()
{
    int a,b=1,sum=1;
    printf("enter the number:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("the factorial for negtive no. doesnt exist");
    }
    else if(a==0)
    {
        printf("the factorial for 0 is 1");
    }
    else
    {
        
        while(b<=a)
    {
        sum=sum*b;
        b=b+1;
    }
    printf("result=%d",sum);
    }
    
    
    return 0;
}
