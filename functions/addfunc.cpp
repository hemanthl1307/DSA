// A simple program to add numbers with parameters
#include<iostream>
using namespace std;
void  add(int a,int b);
void add(int a,int b)
{
    int sum=a+b;
    cout<<"Sum is:"<<sum<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    add(a,b);
    return 0;
}