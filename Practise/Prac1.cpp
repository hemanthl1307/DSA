//calcuate sum of digits 
//Ex:145=1+4+5=10
#include<iostream>
using namespace std;
int number(int num)
{
    int digitsum=0;
    while(num>0)
    {
       int lastdigit=num%10;
        num=num/10;
        cout<<lastdigit<<" ";
        digitsum+=lastdigit;
    }
    cout<<"\n";
    return digitsum;
}
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<number(num)<<endl;
}