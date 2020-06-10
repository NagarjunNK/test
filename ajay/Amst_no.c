
#include <stdio.h>
#include<math.h>

int main()
{
   int a,sum=0,b,count=0,temp1,temp,rem;
   printf("enter the no.");
   scanf("%d",&a);
   //to count the given integer
   temp1=a;
   while(temp1>0)
   {
       temp1=temp1/10;
       count++;
   }
   b=count;
   printf("%d",b);
   
   //to find armstrong no.
   temp=a;
   while(temp>0)
   {
       rem=temp%10;
       sum=sum+pow(rem,b);
       temp=temp/10;
   }
   printf("\n%d",sum);
   if(sum==a)
   {
       printf("Armstrong no");
   }
   else
   {
       printf("Not Armstrong no");
   }
   return 0;
}
