//To check a number is prime or not
#include<iostream>
using namespace std;
int prime(int N)
{ 
    bool isprime=true;
    if(N<=1)
    {
        cout<<"0 is Neither prime nor Composite"<<endl;
    }
    for(int i=2;i*i<=N;i++)
    {
        if(N%i==0)
        {
          isprime=false;
        }
    }
    if(isprime){
        cout<<N<<" is Prime"<<endl;
    }else
    cout<<N<<" is Not a prime"<<endl;
}
int main()
{
    int N;
    cout<<"Enter the number:"<<endl;
    cin>>N;
    prime(N);
}