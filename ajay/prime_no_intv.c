#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,i,count;
    printf("enter the range:");
    scanf("%d %d",&a,&b);
    
    if(a>b)
    {
        printf("ERROR");
        
    }
    else
    {
        printf("the prime no. in the given range of %d to %d:\n",a,b);
        while(a<b)
        {
            count=0;
            for(i=2;i<=a/2;i++)
            {
                if(a%i==0)
                {
                    count++;
                }
            }
            if(count==0)
            {
                
                printf("%d\t",a);
            }
            a=a+1;
        }
     
     }   
    return 0;
}
