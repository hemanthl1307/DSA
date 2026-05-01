#include<iostream>
using namespace std;
int main()
{
    int size;
    int a[size];
    cout<<"Enter the array size:"<<endl;
    cin>>size;
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
    return 0;
}