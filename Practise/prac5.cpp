//To convert Binary to decimal
#include<iostream>
using namespace std;
void todecimal(int num)
{
    int ans=0;
    int pow=1;
    int rem;
    while(num>0)
    {
        rem=num%10;
        num/=10;
        ans=ans+=(rem*pow);
        pow*=2;
    }
    cout<<"The Binary number is:"<<ans<<endl;
}
int main()
{
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    todecimal(num);
    return 0;
}