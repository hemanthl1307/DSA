//To reverse a number
#include<iostream>
using namespace std;
int reverse(int x)
    {
    int rem=0;
    int rev;
    while(x>0)
    {
        rem=x%10;
        x=x/10;
        rev=rev*10+rem;
    }
    return rev;
}
int main()
{
    int x;
    cout<<"enter the value of x:"<<endl;
    cin>>x;
    cout<<reverse(x)<<endl;
    return 0;
}