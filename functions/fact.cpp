#include<iostream>
using namespace std;
int factorial(int N){
    int i,fact=1;
    if(N==0)
    {
        cout<<"Factorial of 0 is 1"<<endl;
    }
    for(i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int N;
    cout<<"Enter the value of N:";
    cin>>N;
    cout<<factorial(N)<<endl;
}