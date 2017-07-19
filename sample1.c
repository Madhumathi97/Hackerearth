#include <stdio.h>

int main()
{
    char s[100];
    int c=0;
    scanf("%s",&s);
    do
    {
        if(s[c]>='a'&&s[c]<='z')
        {
            s[c]=s[c]-32;
            c++;
        }
        else
        {
            s[c]=s[c]+32;
            c++;
        }
    }while(s[c]!='\0')
    printf("%s",s);
    return 0;
}
