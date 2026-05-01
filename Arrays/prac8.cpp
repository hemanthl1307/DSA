//To find union of an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec1={1,2,3};
    vector<int>vec2={1,4,5};
    for(int value2:vec2)
    {
        int count=0;
        for(int value1:vec1)
        {
            if(value2==value1)
            {
                count++;
            }
        }
        if(count==0)
        {
            vec1.push_back(value2);
        }
    }
    for(int res:vec1)
    {
        cout<<res<<" ";
    }
    return 0;
}