#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;
int main()
{
    char *list[50];
    int i,n,ch,pos;
    cout<<"the menu\n1-Enter the names\n2-Delete a name\n3-print all names\n4-exit\n";
    do
    {cout<<"enter your choice";
    cin>>ch;
    switch(ch)
    {
case 1:
    cout<<"enter the no of names\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        list[i]=(char*)malloc(50);
    }
     for(i=0;i<n;i++)
    {
        cout<<"enter name\n";
        gets(list[i]);
    }

    for(i=0;i<n;i++)
    {
        puts(list[i]);
    }
     break;
case 2:
    cout<<"enter the position of the name to be deleted";
    cin>>pos;
    for(i=pos;i<n-1;i++)
    {
        list[i]=list[i+1];
    }
    list[n-1]='\0';
    cout<<"after deletion\n";
      for(i=0;i<n;i++)
    {
        puts(list[i]);
        cout<<endl;
    }
    break;
case 3:for(i=0;i<n;i++)
    {
        puts(list[i]);
    }
    break;

case 4:exit(0);}
}
while(ch!=4);}
