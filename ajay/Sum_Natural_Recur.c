
#include <stdio.h>
#include<math.h>
//function protype(declaration)
int sum(int n);

//main program
int main()
{
    int a,result;
    printf("enter the no. of elements to be added:");
    scanf("%d",&a);
    result=sum(a); //function call
    printf("sum=%d",result);
    return 0;
}
//function defintion
int sum(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        c=c+i;
    }
    return c;
}
