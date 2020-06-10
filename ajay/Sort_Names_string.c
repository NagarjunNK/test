

#include <stdio.h>
#include <string.h>

int main ()
{
    char string[10][10],temp[10][10];
    int i, j,n,l;
    printf("Enter the no. of string name : ");
    scanf("%d",&n);
    printf("enter the names:\n");
    for(i=0;i<n;i++)
    {
       scanf("%s",string[i]);
    }
    //swap the names when first is greater
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(string[i],string[j])>0) //since full word has to be compared
            {
                strcpy(temp,string[i]);//since full word has to be copied
                strcpy(string[i],string[j]);
                strcpy(string[j],temp);
            }
        }
    }

    printf("the sorted list:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",string[i]);
    }
    return 0;
}



