
#include <stdio.h>
#include<math.h>
//function protype(declaration)
int fibon(int a,int b);

//function defintion
int fibon(int a,int b)
{
    int c,n,i;
    printf("Enter the length of series needed:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
        
    }
    return 0;
}

//main function
int main()
{
    int n1=0,n2=1,sum;
    //function call in program
    sum=fibon(n1,n2);
    return 0;
}
