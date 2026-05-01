//To convert decimal to binary
#include<iostream>
#include<cmath>
using namespace std;
//this code is also correct but it is only valid for smaller number for larger number 
//integer overflow happens
//------------(This is also correct)avoid this---------------
// int tobinary(int num)
// {
//     int ans=0;
//     int rem;
//     int i=10;
//     int j=0;
//     while(num>0)
//     {
//         rem=num%2;
//         num=num/2;
//         ans=ans+(rem*pow(i,j));
//         j+=1;
//     }
//     return ans;
// }

//-------------use this method-------------
int tobinary(int num)
{
    int ans=0;
    int rem;
    int pow=1;
    while(num>0)
    {
        rem=num%2;
        num=num/2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<tobinary(num)<<endl;
    return 0;
}