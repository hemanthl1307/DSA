#include<iostream>
using namespace std;
int main()
{
    int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int target=8;
    pair<int,int>p;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(mat[i][j]==target)
            {
                p.first=i;
                p.second=j;
                cout << "Found at: (" << p.first << ", " << p.second << ")";
            }
        }
    }
    return -1;
}