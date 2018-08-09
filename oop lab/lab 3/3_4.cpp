#include<iostream>
using namespace std;
int main()
{
    char a,b,c;
    float w,x,y,z,ch;
    while(1)
    {
    cout<<"give me an expression\n";
    cin>>w>>a>>x>>b>>y>>c>>z;
    if(b=='+')
    {
        cout<<(w*z+x*y)/(x*z);
        cout<<"\ndo you wish to continue press 1 to continue else press 0";
        cin>>ch;
        if(ch==0)
            break;
        else continue;
    }
    if(b=='-')
    {
        cout<<(w*z-x*y)/(x*z);
        cout<<"\ndo you wish to continue press 1 to continue else press 0";
        cin>>ch;
        if(ch==0)
            break;
        else
            continue;
    }
    if(b=='*')
    {
        cout<<(w*y)/(x*z);
        cout<<"\ndo you wish to continue press 1 to continue else press 0";
        cin>>ch;
        if(ch==0)
            break;
        else
            continue;
    }
    if(b=='/')
    { cout<<(w*z)/(x*y);
      cout<<"\ndo you wish to continue press 1 to continue else press 0";
      cin>>ch;
        if(ch==0)
            break;
        else
            continue;

    }
    else
    {
        cout<<"wrong expression";
        cout<<"\ndo you wish to continue press 1 to continue else press 0";
        cin>>ch;
        if(ch==0)
            break;
        else
            continue;
    }}}
