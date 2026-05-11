#include<iostream>
using namespace std;
//Non Recursive function
// int Factorial(int n)
// {
//     int fact=1;
//     if(n==0)
//     {
//         return 1;
//     }
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }

//Recursive function
int Factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*Factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number n:\n";
    cin>>n;
    cout<<Factorial(n);
    return 0;
}