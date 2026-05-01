// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
//         //for(j=1;j<=(5-i)*2;j++) if you want space between stars use this loop
//         for(j=1;j<=5-i;j++) // if you don't want space between stars use this loop
//         {
//             cout<<" ";
//         }
//         for(k=1;k<=i;k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=(4-i);j++)
        {
            cout<<" ";
        }
        for(int k=i;k>0;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}