//To swap smallest and largest element in array
#include<iostream>
using namespace std;
void swapminlarg(int a[],int size)
{
    int i,index1,index2;
    int small=INT_MAX;
    int lar=INT_MIN;//{1,2,3,4}
    for(i=0;i<size;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            index1=i;
        }
          if(a[i]>lar)
        {
            lar=a[i];
            index2=i;
        }
    }
        swap(a[index1],a[index2]);
}
int main()
{
    int size;
    cout<<"Enter the array size:"<<endl;
    cin>>size;
     int a[size];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"The array elements are:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    swapminlarg(a,size);
    cout<<"After swapping largest and smallest"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}