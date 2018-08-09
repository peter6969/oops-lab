#include<iostream>
using namespace std;
int main()
{
    char *list[50];
    int i,n;
    cout<<"enter the no of names";
    cin>>n;
    for(i=0;i<n;i++)
    {
        gets(list[i]);
    }
    for(i=0;i<n;i++)
    {
        puts(list[i]);
    }
}
