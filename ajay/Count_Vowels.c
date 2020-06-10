

#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int c=0,g=0,v=0,b=0,n=0,i;
    printf("enter the string:");
    fgets(s,sizeof(s),stdin);
    printf("line=");
    puts(s);
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'|| s[i]=='A')
        c++;
        else if(s[i]=='e'|| s[i]=='E')
        g++;
        else if(s[i]=='i'||s[i]=='I')
        v++;
        else if(s[i]=='o'||s[i]=='O')
        b++;
        else if(s[i]=='u'||s[i]=='U')
        n++;
        else
        continue;
    }
    printf("the count of vowel 'a'=%d\n",c);
    printf("the count of vowel 'e'=%d\n",g);
    printf("the count of vowel 'i'=%d\n",v);
    printf("the count of vowel 'o'=%d\n",b);
    printf("the count of vowel 'u'=%d\n",n);
    return 0;
}