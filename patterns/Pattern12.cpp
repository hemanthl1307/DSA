#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    for(int i=1;i<=4;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout<<char('A'+(j-1))<<" ";
        }
        cout<<endl;
    }
    return 0;
}