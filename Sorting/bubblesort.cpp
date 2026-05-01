#include<iostream>
#include<vector>
using namespace std;
void bubblesort(char arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    char arr[]={'C','A','M','B','R','I','D','G','E'};
    int n=9;
    bubblesort(arr,n);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}