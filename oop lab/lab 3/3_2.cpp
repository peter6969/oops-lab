#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<"enter two numbers";
    cin>>x>>y;
    swap(x,y);
     cout<<"\nswap results\n";
    cout<<"\n"<<x<<"  "<<y;
}
