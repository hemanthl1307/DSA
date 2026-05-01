#include<iostream>
#include<vector>
using namespace std;
vector<int>Twosum(vector<int>vec,int target)
{
    vector<int>ans;
    int n=vec.size();
    int sum;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum=vec[i]+vec[j];
            if(sum==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
int main()
{
    vector<int>vec={2,7,11,15};
    int target=18;
    vector<int>ans=Twosum(vec,target);
    for(int value:ans)
    {
        cout<<value<<" ";
    }
    return 0;
}