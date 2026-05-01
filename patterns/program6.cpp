//triangle pattern to print numbers
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        int num=1;
        for(int j=0;j<=i;j++)
        {
            cout<<num<<" ";
            //num++ for different numbers in a row
        }
        cout<<endl;
    }
    return 0;
}