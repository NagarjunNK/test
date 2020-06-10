#include <stdio.h>
#include<math.h>

int main()
{
   int a,n1=0,n2=1,sum,i;
   printf("enter the n number of terms:");
   scanf("%d",&a);
   for(i=0;i<a;i++)
   {
       printf("%d\t",n1);
       //0+1=1(n1+n2=sum)..1+1=2(n1(n2)+n2(sum)=sum...thus swap them crtly
       sum=n1+n2;
       n1=n2;
       n2=sum;
   }
   
   return 0;
}
