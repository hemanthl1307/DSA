#include<iostream>
using namespace std;
int sum(int a);
int sum(int a){
    int ans=0;
    int i;
    for(i=1;i<=a;i++)
    {
        ans=ans+i;
    }
    return ans;
}
int main()
{
    int a;
    cout<<"Enter a number a:";
    cin>>a;
    cout<<sum(a)<<endl;
}