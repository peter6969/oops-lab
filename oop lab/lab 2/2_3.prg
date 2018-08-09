#include<iostream>
using namespace std;
void minmax( int array[], int length, int * min, int * max);
int main()
{
    int n;
    cout<<"enter no of elements";
    cin>>n;
    int ar[n],l,i;
    int x,y;
    for(i=0;i<n;i++)
    {
        cout<<"enter any number";
        cin>>ar[i];
    }
    x=0;
    y=0;
    minmax(ar,l,&x,&y);

}
void minmax( int array[], int length, int * min, int * max)
{
    int i;
    for(i=0;array[i]!='\0';i++)
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
    cout<<"max is"<<max;
    cout<<"min is"<<min;
}
