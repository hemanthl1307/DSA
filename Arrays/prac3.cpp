//To reverse an array 
#include<iostream>
using namespace std;
void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int i,temp;
    while(start<=end)
    {
        //temp=arr[start];
        //arr[start]=arr[end];
        //arr[end]=temp;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array before reversing:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    reverse(arr,size);
    cout<<"The after reversing"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}