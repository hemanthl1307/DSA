#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=i;j>0;j--)
        {
            char ch=65;
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
    return 0;
}