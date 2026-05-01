#include<iostream>
using namespace std;
int main()
{
    //matrix syntax and initialization
    //int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    //cout<<mat[2][1];

    //to input the matrix and print
    int row,col;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    cout<<"Enter the number of columns"<<endl;
    cin>>col;
    int mat[row][col];
    cout<<"Enter the matrix elements"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"MATRIX is:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}