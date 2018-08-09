#include<stdio.h>
int main()
{int i,j,k;
printf("enter the vaule of i and j");
scanf("%d%d",&i,&j);
if((i%j)<j)
{k=(j-(i%j))+i;
printf("%d",k);
}
else
{
    k=((i%j)-j)+i;
printf("%d",k);
}}
