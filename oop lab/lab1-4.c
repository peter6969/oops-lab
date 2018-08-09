#include<stdio.h>
int main()
{int i,fac;
printf("enter any number");
scanf("%d",&i);
fac=fact(i);
printf("%d",fac);
}
int fact(int x)
{
    int f;
    if(x>=1)
    {return x*fact(x-1);}
else
        return 1;

}

