#include<iostream>
using namespace std;
int mystrlen(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return i;
}
int main()
{
    char str[100];char *p;
    int i,l;
    cout<<"enter any string ";
    cin>>str;
    l=mystrlen(str);
    cout<<"length is " <<l;

}
