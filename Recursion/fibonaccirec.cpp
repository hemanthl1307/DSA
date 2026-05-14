#include<iostream>
using namespace std;
// void fibonacci(int n)
// {
//     cout<<"The Fibonacci sequence is:\n";
//     int a=0,b=1,c=0;
//     cout<<a<<" "<<b<<" ";
//     while(c<=n)
//     {
//         c=a+b;
//         cout<<c<<" ";
//         a=b;
//         b=c;
//     }
// }
// void printfibonacci(int n)
// {
//     cout<<"The Fibonacci sequence is:\n";
//     long long  a=0,b=1,c=0;
//     for(int i=2;i<=n;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     cout<<c<<" ";
// }
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    //fibonacci(n);
    //cout<<"Enter the value n to print nth fibonacci:\n";
    //printfibonacci(n);
    cout<<"The fibonacci of "<<n<<"th term is:\n";
    cout<<fib(n);
    return 0;
}