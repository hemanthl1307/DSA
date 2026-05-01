//Butterfly pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,m;
    //upper part
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        if(i!=3)
        {
        for(k=0;k<(6-i*2);k++)
        {
                cout<<" ";
        }
        }
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //lower part
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            cout<<"*";
        }
        if(i!=0)
        {
            for(k=0;k<2*i;k++)
            {
                cout<<" ";
            }
        }
        for(m=0;m<4-i;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}