#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("Enter any number");
    scanf("%c",&ch);
    if(ch>=48&&ch<=57)
    printf("Entered value in integer");
    else
    printf("enter the correct no.");
    return 0;
}