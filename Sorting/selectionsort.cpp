#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int small=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[small])
            {
                small=arr[j];
            }
        }
        swap(arr[i],arr[small]);
    }
}
int main()
{
    int arr[]={4,1,2,3,5};
    int n=5;
    selectionsort(arr,n);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}