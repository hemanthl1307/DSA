//Calculate nCr binomial coeficient for n & r
//Method-1
// #include<iostream>
// using namespace std;
// void factorial(int n,int r)
// {
//     int i,d,f1=1,f2=1,f3=1,ans;
//     for(i=1;i<=n;i++)
//     {
//         f1*=i;
//     }
//     for(i=1;i<=r;i++)
//     {
//         f2*=i;
//     }
//     d=(n-r);
//     for(i=1;i<=d;i++)
//     {
//         f3*=i;
//     }
//     cout<<"The factorial of n is:"<<f1<<endl;
//     cout<<"The factorial of r is:"<<f2<<endl;
//     ans=(f1)/(f3*f2);
//     cout<<"The Binomial Coefficient(nCr) is: "<<ans<<endl;
// }
// int main()
// {
//     int n,r;
//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;
//     cout<<"Enter the value of r:"<<endl;
//     cin>>r;
//     factorial(n,r);
// }
//Method-2
#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r)
{
   int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
    return (fact_n)/(fact_nmr*fact_r);
}
int main()
{
    int n,r;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of r:"<<endl;
    cin>>r;
    ncr(n,r);
    cout<<ncr(n,r)<<endl;
}