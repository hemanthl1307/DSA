//first recursion program to print number in reverse
#include<iostream>
using namespace std;
// Non recursive
// void Printnum(int n)
// {
//     for(int i=n;i>0;i--)
//     {
//         cout<<i<<" ";
//     }
// }

//Recursive function
void Printnum(int n)
{
    if(n==1)
    {
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    Printnum(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number n:\n";
    cin>>n;
    Printnum(n);
    return 0;
}