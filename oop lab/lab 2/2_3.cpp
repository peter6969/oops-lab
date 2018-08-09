#include<iostream>
using namespace std;
void minmax( int array[], int length, int * min, int * max);
int main()
{
    int ar[10],l,i;
    int x,y;
    cout<<"enter 10 numbers:";
    for(i=0;i<10;i++)
    {
       cin>>ar[i];
    }
    x=ar[0];
    y=ar[0];
    minmax(ar,10,&x,&y);

}
void minmax( int array[], int length, int * min, int * max)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(array[i]>*max)
        {
            *max=array[i];
        }
        if(array[i]<*min)
        {
            *min=array[i];
        }


    }
    cout<<"max is\n"<<*max;
    cout<<"\nmin is\n"<<*min;
}
