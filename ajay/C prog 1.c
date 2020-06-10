/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a[20],i,n,x,great,low,ind,ind1,n1,c,j;
   printf("enter the no. of array elements:");
   scanf("%d",&n);
   x=n/2;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("array=\t");
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
  printf("\n");
   great=a[0];
   low=a[0];
   for(i=0;i<x;i++)
   {
       //to get the greatest no. nf position
       if(a[i]>great)
       great=a[i];
       //to find the position
       if(great==a[i])
       ind=i+1;
       
       //to get the lowest no. nd position
       if(a[i]<low)
       low=a[i];
       //to find position
       if(low==a[i])
       ind1=i+1;
  }
   printf("Greater is %d in the 1st half of array positioned at %d\n",great,ind);
   printf("lesser is %d in the 1st half of array positioned at %d\n",low,ind1);
   for(i=x;i<n;i++)
   {
       //to get the greatest no. nf position
       if(a[i]>great)
       great=a[i];
       //to find the position
       if(great==a[i])
       ind=i+1;
       
       //to get the lowest no. nd position
       if(a[i]<low)
       low=a[i];
       //to find position
       if(low==a[i])
       ind1=i+1;
  }
   printf("Greater is %d in the 2nd half of array positioned at %d\n",great,ind);
   printf("lesser is %d in the 2nd half of array positioned at %d",low,ind1);
  
   return 0;
}