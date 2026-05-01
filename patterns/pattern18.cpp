#include<iostream>
using namespace std;
int main()
{
    int num=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<(4-i);k++)
        {
            cout<<num;
        }
        cout<<endl;
        num++;
    }
    return 0;
}