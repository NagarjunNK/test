
#include <stdio.h>
#include<math.h>

int main()
{
   int a,sum,b,c,count,temp1,temp,rem,i;
   printf("enter the range");
   scanf("%d %d",&a,&c);
  
   for(i=a;i<=c;i++)
   {
       //put sum nd count inside the loop to avoid over write
       sum=0;
       count=0;
       temp1=i;
       while(temp1>0)
       {
            temp1=temp1/10;
            count++;
       }
       b=count;
       temp=i;
       while(temp>0)
       {
           rem=temp%10;
           sum=sum+pow(rem,b);
           temp=temp/10;
       }
       if(sum==i)
        {
           printf("%d\n",sum);
        }
   }
   return 0;
}
