#include<iostream>
using namespace std;
struct autoparts
{
    char srno[4];
    int year;
    int quantity;
    char material[50];
};
int main()
{
   struct autoparts a[60];
   cout<<"please enter the data\n";
   for(int i=0;i<60;i++)
   {
       cout<<"enter the manufacture name\n";
       cin>>a[i].srno;
       cout<<"enter the manufacture year\n";
       cin>>a[i].year;
       cout<<"enter the manufacture quantity\n";
       cin>>a[i].quantity;
       cout<<"enter the manufacture material\n";
       cin>>a[i].material;
   }

   for(int i=12;i<=28;i++)
   {
       cout<<"the retrieved info is";
       cout<<"sr no="<<a[i].srno;
       cout<<"manf year="<<a[i].year;
       cout<<"quantity="<<a[i].quantity;
       cout<<"material="<<a[i].material;
   }
}
