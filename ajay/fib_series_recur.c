
#include <stdio.h>
#include<math.h>
//function protype(declaration)
int fibon(int a);

//function defintion
int fibon(int a)
{
    int c;
    if(a<=1)
    {
        return a;
    }
    else
    {
        //recursion function call
       c=fibon(a-1)+fibon(a-2);
       return c;
    }
    return 0;
}

//main function
int main()
{
    int n,i,sum;
    printf("Enter the length of series needed:\t");
    scanf("%d",&n);
    //function call in program
    for(i=0;i<n;i++)
    {
        sum=fibon(i);
        printf("%d\t",sum);
    }
    return 0;
}
