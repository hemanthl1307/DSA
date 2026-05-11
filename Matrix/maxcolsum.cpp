#include<iostream>
using namespace std;
int main()
{
    int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int colsum=-1;
    for(int j=0;j<3;j++)
    {
        int sum=0;
        for(int i=0;i<4;i++)
        {
            sum+=mat[i][j];
        }
        colsum=max(colsum,sum);
    }
    cout<<colsum;
}