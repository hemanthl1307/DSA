// to print  pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=(4-i-1);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++)
        {
            cout<<k;
        }
        for(int l=i;l>=1;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}