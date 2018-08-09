#include<stdio.h>
int strend(char *s,char *t);
int main(void)
{
    char s[100],t[50];
    int ret;
    gets(s);
    gets(t);
    ret = strend(s,t);
    printf("%d",ret);
    return 0;
}
int strend(char *s,char *t)
{
    int len;
    len=strlen(t);
    while(*s!='\0')
        ++s;
    --s;

    while(*t!='\0')
        ++t;

    --t;
    while(len > 0)
    {
        if(*t==*s)
        {
            --t;
            --s;
            --len;
        }
        else
            return 0;
    }
    if( len == 0)
        return 1;
}


