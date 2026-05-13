#include<iostream>
using namespace std;
void even(int n)
{
    if(n==0){
        cout<<"Even number:\n";
        cout<<0<<" ";
        return;
    }
    even(n-1);
    if(n%2==0)
    {
    cout<<n<<" ";
    }
    else{
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    even(n);
    return 0;
}