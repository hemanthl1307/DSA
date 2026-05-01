//triangle pattern to print numbers
#include<iostream>
using namespace std;
int main()
{
    int n=0;
    for(int i=0;i<4;i++)
    {
        n++; //insted u can also use (i+1)in inner for loop cout statement
        for(int j=0;j<=i;j++)
        {
            cout<<n<<" ";
            //cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}