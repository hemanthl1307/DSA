//To get Subarray from an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5};
    for(int srt=0;srt<5;srt++)
    {
        for(int end=srt;end<5;end++)
        {
            cout<<" { ";
            for(int i=srt;i<=end;i++)
            {
                cout<<vec[i]<<" ";
            }
            cout<<" } ";
        }
        cout<<endl;
    }
    return 0;
}