//To print prime number from 2 to N
#include<iostream>
using namespace std;
bool isprime(int N)
{
    if(N<2)
    {
        cout<<"The number is neither prime nor composite"<<endl;
        return false;
    }
    // for(int i=2;i<N;i++)
    for(int i=2;i*i<N;i++)
    //for(int i=2;i<sqrt(N);i++)
    {
        if(N%i==0)
        {
             return false;
        }
    }
    return true;
}
int main()
{
    int N;
    cout<<"Enter the value of N:"<<endl;
    cin>>N;
    cout<<"The prime numbers are:"<<endl;
    for(int i=2;i<=N;i++)
    {
        if(isprime(i))
        cout<<i<<" ";
    }
}