#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0&&arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
int main()
{
    int n=5;
    int arr[]={5,4,1,3,2};
    selectionsort(arr,n);
    for(int value:arr){
        cout<<value<<" ";
    }
    return 0;
}