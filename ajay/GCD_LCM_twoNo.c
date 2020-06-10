
#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,gcd,lcm,i,small;
    printf("Enter the any two values:\t");
    scanf("%d %d",&a,&b);
    
    if(a<b)
    {
        small=a;
    }
    else
    {
        small=b;
    }
    //to find gcd 
    for(i=1;i<=small;i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd=i;
            }
        }
        printf("the gcd of %d and %d is %d",a,b,gcd);
    //to find lcm ::relation lcm*gcd=n1*n2;
    lcm=(a*b)/gcd;
    printf("\nthe lcm of %d and %d is %d",a,b,lcm);
    

    return 0;
}
