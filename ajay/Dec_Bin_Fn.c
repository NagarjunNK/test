
#include <stdio.h>
#include<math.h>
//function protype(declaration) input+no result
void Dec_Bin(int n);
//main program
int main()
{
    int a,i,ans;
    printf("Enter the deciml number:\t");
    scanf("%d",&a);
    Dec_Bin(a);//function call
    return 0;
}
//function defintion
void Dec_Bin(int n)
{
    int N[10],i;
    for(i=0;n>0;i++)
    {
        N[i]=n%2;
        n=n/2;
    }
    printf("%d\n",i);
    for(i=i-1;i>=0;i--)
    {
        printf("%d",N[i]);
        
    }
}