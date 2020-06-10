#include <stdio.h>
#include<math.h>

int main()
{
   int a,b,c,i;
   printf("enter the multiplication talbe to display:");
   scanf("%d",&a);
   printf("\nenter the no. of table lines required\n");
   scanf("%d",&b);
   printf("The table:-\n");
   for(i=0;i<=b;i++)
   {
       c=a*i;
       printf("%d*%d=%d\n",i,a,c);
   }
    
    
    return 0;
}
