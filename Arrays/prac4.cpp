//To find Sum,Product and average of all array elements
#include<iostream>
using namespace std;
void calculate(int arr[],int size)
{
    int sum=0;
    int prod=1;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        prod*=arr[i];
    }
    int aver=sum/2;
    cout<<"The sum of elements are:"<<sum<<endl;
    cout<<"The Product of elements are:"<<prod<<endl;
    cout<<"The average of elements are:"<<aver<<endl;
}
int main()
{
    int size;
    cout<<"Enter the array size:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array elements are:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    calculate(arr,size);
        return 0;
}