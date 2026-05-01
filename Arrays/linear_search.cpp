//program to search element in an array using Linear search Algorithm
#include<iostream>
using namespace std;
void linearsearch(int a[],int size,int key)
{
    int i,found=0;
    for(i=0;i<size;i++)
    {
        if(a[i]==key)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        cout<<"The key element "<<key<<" Found at position "<<i<<endl;
    }
    else{
        cout<<"The key element not found"<<endl;
    }
}
int main()
{
    int size,key;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"The array is:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"Enter the key element"<<endl;
    cin>>key;
    linearsearch(a,size,key);
    return 0;
}