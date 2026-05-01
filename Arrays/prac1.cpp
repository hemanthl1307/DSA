//To find smallest and largest in an array
#include<iostream>
using namespace std;
int smallest(int a[],int size)
{
    int i,index;
    int small=INT_MAX;
    for(i=0;i<size;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            //index=i;
            // small=min(a[i],small);
        }
    }
    // return small;
    //return index;
}
int largest(int a[],int size)
{
    int index,i;
    int max=INT_MIN;
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
           max=a[i];
           // index=i;
        }
    }
    // return max;
   // return index;
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
    smallest(a,size);
    cout<<"The smallest element in array is:"<<smallest(a,size)<<endl;
    largest(a,size);
    cout<<"The largest element in array is:"<<largest(a,size)<<endl;
    return 0;
}