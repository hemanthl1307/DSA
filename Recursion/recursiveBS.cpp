#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&bs,int target, int low,int high)
{
    if(low<=high)
    {
        int mid=low+(high-low)/2;
        if(bs[mid]==target)
        {
            return mid;
        }
        else if(bs[mid]>target)
        {
            return binarysearch(bs,target,low,mid-1);
        }
        else{
            return binarysearch(bs,target,mid+1,high);
        }
    }
    return -1;
}
int main()
{
    vector<int>bs={1,2,3,4,5};
    int n=bs.size();
    int target=10;
    cout<<binarysearch(bs,target,0,n-1);
    return 0;
}