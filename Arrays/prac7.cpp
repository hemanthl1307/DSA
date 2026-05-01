//to find concatination  of an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec1={1,2,3};
    vector<int>vec2={1,4,5};
    for(int value:vec2)
        {
            vec1.push_back(value);
        }
    cout<<"The Union of array is:"<<endl;
    for(int ans:vec1)
    {
        cout<<ans<<" ";
    }
    return 0;
}