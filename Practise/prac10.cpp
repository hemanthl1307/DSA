//GCD of a number using Euclid's Algorithm
#include<iostream>
using namespace std;
int GCD(int m,int n)
{
    int rem=0;
    while(n>0)
    {
        rem=m%n;
        m=n;
        n=rem;
    }
    return m;
}
int main()
{
    int m,n;
    cout<<"Enter two numbers:"<<endl;
    cin>>m>>n;
    cout<<"The GCD("<<m<<","<<n<<")="<<GCD(m,n)<<endl;
    return 0;
}