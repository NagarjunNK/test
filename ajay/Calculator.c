#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,number,c;
    printf("Enter the numbers:-");
    scanf("%d %d",&a,&b);
     printf("1.ADD\n2.SUB\n3.MUL\n4.Div\n");
    printf("Select the number to perform operation:-");
   
    scanf("%d",&number);
    switch(number)
    {
        case(1):
        {
            c=a+b;
            break;
        }
         case(2):
        {
            c=a-b;
            break;
        }
         case(3):
        {
            c=a*b;
            break;
        }
         case(4):
        {
            c=a/b;
            break;
        }
        default:
        {
            printf("\n[ERROR]..Enter the crt operator");
        }
    }
    printf("\nresult=%d",c);
    
    return 0;
}