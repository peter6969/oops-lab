#include<iostream>
using namespace std;
int main()
{
    char str[100];char *p;
    int i;
    cout<<"enter any string";
    gets(str);
    p=str;
    for(i=0;*(p+i)!='\0';i++);
    cout<<"length is <<i;
}
