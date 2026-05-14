#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>arr,int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(arr[n-1]>=arr[n-2])
    {
        return isSorted(arr,n-1);
    }
    return false;
}
int main()
{
    vector<int>arr={1,8,3,4,5};
    int n=arr.size();
    cout<<boolalpha<<isSorted(arr,n);
    return 0;
}