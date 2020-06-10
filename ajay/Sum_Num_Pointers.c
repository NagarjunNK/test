#include <stdio.h>

int main()
{
    int a,b,*d, *p, *q,*r, sum,sub;
    
    printf("Enter two integers to add\n");
    scanf("%d%d", &a,&b);
    
    p = &a;
    q = &b;
    
    sum = *p + *q;
    r=&sum;
    sub=*r-*q;
    d=&sub;
    printf("Sum of entered numbers located at %p = %d\n",r,*r);
    printf("\t%p=%d\n",d,*d);
    if(*d==*p)
    printf("%d=%d",*p,sub);
    else
    printf("Not");
    return 0;
}