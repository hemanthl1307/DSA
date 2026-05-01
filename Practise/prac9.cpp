//To find GCD of a number using Consecutive integer checking method
#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    int t=min(a,b);
    while(t>0)
    {
    if(a%t==0 && b%t==0)
    {
        return t;
    }
    else
    t=t-1;
}
}
int main()
{
    int a ,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<"The GCD("<<a<<","<<b<<")="<<GCD(a,b)<<endl;
    return 0;
}