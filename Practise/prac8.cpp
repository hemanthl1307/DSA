//Nth Fibonacci number only, instead of printing the whole sequence
#include<iostream>
using namespace std;
void fibonacci(int N)
{
    int a=0,b=1,c;
    if (N>=1)
    {
        cout<<a;
    }
    if(N>=2)
    {
        cout<<","<<b;
    }
    for(int i=3;i<=N;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"The Nth Fibbonacci Number is:"<<b<<endl;
}
int main()
{

    int N;
    cout<<"Enter the Number N:"<<endl;
    cin>>N;
    fibonacci(N);
    return 0;
}