
#include <stdio.h>
#include<math.h>

int main()
{
   int a,N[10],i;
   printf("enter the decimel number:");
   scanf("%d",&a);
   for(i=0;a>0;i++)    
   {    
      N[i]=a%2;    
      a=a/2;    
   }   
   //printf("%d\n",i);
   for(i=i-1;i>=0;i--) 
   {
       printf("%d",N[i]);
   }
  
   return 0;
}
