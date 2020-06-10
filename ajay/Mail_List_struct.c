
#include <stdio.h>
#include<string.h>

struct Member
{
    char name[20];
    char addr[20];
    char email[20];
};


int main()
{ 
    int n,i;
    printf("Enter the number of persons to send mail through template:");
    scanf("%d",&n);
    
    struct Member list[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter the member data:%d\n",i+1);
        printf("Name         :");
        scanf("%s",&list[i].name);
        printf("Address      :");
        scanf("%s",&list[i].addr);
        printf("Email address:");
        scanf("%s",&list[i].email);
    }
    for(i=0;i<n;i++)
    {
        printf("---------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n\tHi '%s', thanks for joining me in this programming classes. Hope you have enjoined this session.I would like to thank u by sending this Cources Certificate to ur address '%s' through this mail '%s'",list[i].name,list[i].addr,list[i].email);
    
        printf("\n-------------------------------------------------------------------------------------------------------------------------------------\n");
    }
    
    return 0;
}
