#include<stdio.h>
int main()
{char str[50];
int i,c=0;
printf("enter any string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
	c++;
}
printf("the length of string is=%d",c);
}
