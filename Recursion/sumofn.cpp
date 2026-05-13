#include<iostream>
using namespace std;
int sum(int n)
{
    int s=0;
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of N:\n";
    cin>>n;
    cout<<sum(n);
    return 0;
}