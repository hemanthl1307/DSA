#include<iostream>
using namespace std;
int main()
{
    int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int maxsum=-1;
    for(int i=0;i<4;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=mat[i][j];
        }
        maxsum=max(maxsum,sum);
    }
    cout<<"The maximum sum is:"<<maxsum<<endl;
    return 0;
}