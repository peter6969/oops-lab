#include<stdio.h>
int main()
{int i,c=0;
printf("enter a number");
scanf("%d",&i);
while(i!=0)
{
    i=i/10;
    c=c+1;
}
printf("number of digits are %d",c);
}
