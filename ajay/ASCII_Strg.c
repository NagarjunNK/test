
#include <stdio.h>
#include<string.h>

int main()
{
   char a[40],i,b;
   printf("Enter any string :\t");
   scanf("%s",&a);
   b=strlen(a);
   for(i=0;i<b;i++)
   {
       printf("The ASCII value of %c is %d\n",a[i],a[i]);
   }
   return 0;
}