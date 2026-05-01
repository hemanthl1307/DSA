//  Area of a circle

#include<iostream>
using namespace std;
int main()
{
    float radius;
    float area;
    cout<<"Enter the radius:"<<endl;
    cin>>radius;
    area=3.14*radius*radius;
    cout<<"Area of a circle is:"<<int(area)<<endl;
    return 0;
}

// Minimum of 2 numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a & b:"<<endl;
    cin>>a>>b;
    if(a>b)
    cout<<a<<" is maximum and "<<b<<" is minimum";
    else
    cout<<b<<" is maximum "<<a<<" is minimum ";
    return 0;
}

// to check number is Even or odd

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number(num):"<<endl;
    cin>>num;
    if((num/2)*2==num)
    cout<<num<<" is Even"<<endl;
    else
    cout<<num<<" is Odd"<<endl;
    return 0;
}

//Sum of numbers from 1 to N

#include<iostream>
using namespace std;
int main()
{
    int i,N,sum=0;
    cout<<"Enter a number N:";
    cin>>N;
    for(i=1;i<=N;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of "<<N<<" numbers is "<<sum;
    return 0;
}

//To check whether the number is prime or not

#include<iostream>
using namespace std;
int main()
{
    int i,num;
    int count=0;
    cout<<"Enter a number:";
    cin>>num;
    if(num<=1)
    {
        cout<<"num is not a prime number!";
        return 0;
    }
   bool isprime=true;
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime==false)
    cout<<num<<" is Not a prime number";
    else
    cout<<num<<" is a prime number"<<endl;
    return 0;
}

//To calculate simple interest

#include<iostream>
using namespace std;
int main()
{
    int p,t,r,SI;
    cout<<"Enter the Principle amount:"<<endl;
    cin>>p;
    cout<<"Enter the Time period:"<<endl;
    cin>>t;
    cout<<"Enter the Rate of Interest:"<<endl;
    cin>>r;
    SI=(p*t*r)/100;
    cout<<"The Simple Interest is:"<<SI<<endl;
    return 0;
}

// If a person is eligible to get driving license
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    if(age>18)
    {
        cout<<"Eligible to get Driving License"<<endl;
    }
    else{
        cout<<"Not Eligible to get Driving License"<<endl;
    }
    return 0;
}
//To calculate factorial of a number

#include<iostream>
using namespace std;
int main()
{
    int i,N,fact=1;
    cout<<"Enter a number N:"<<endl;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial of "<<N<<" is "<<fact<<endl;
    return 0;
}