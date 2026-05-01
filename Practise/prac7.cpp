//To print the fibonacci sequence till N
#include<iostream>
using namespace std;
void fibonacci(int N)
{
    int a=0,b=1,c;
    if(N<=0)
    {
        cout<<"Invalid!";
    }
    if(N>=1)
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
        cout<<c<<",";
        a=b;
        b=c;
    } 
}
int main()
{
    int N;
    cout<<"Enter the Number N:"<<endl;
    cin>>N;
    fibonacci(N);
    return 0;
}