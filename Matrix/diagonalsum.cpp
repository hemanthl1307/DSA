#include<iostream>
using namespace std;
    //---primary diagonal
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         if(i==j)
    //         {
    //             sum+=mat[i][j];
    //         }
    //     }
    // }
    //----secondary diagonal
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         if(j==3-1-i)//-------------------for SD condition j=n-1-i or i+j==n
    //         {
    //             sum+=mat[i][j];
    //         }
    //     }
    // }
    void diagsum(int mat[][3],int n){
        int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || j==n-1-i)
            {
                sum+=mat[i][j];
            }

        }
    }
    cout<<"The sum is"<<sum;
}
int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    diagsum(mat,3);
    return 0;
}