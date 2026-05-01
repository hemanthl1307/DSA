#include<iostream>
using namespace std;
// int  func(){
//     //cout<<"Hello I am Hemu"<<endl;
//     return 10;
//     cout<<"Hello I am Hemu"<<endl;
// }
int  func(int a){
    if (a==0)
    {
        cout<<"Zero"<<endl;
        return 0;
    }
    else if(a>0)
    {
        cout<<"positive number"<<endl;
    }
    else{
        cout<<"Negative number"<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter a:";
    cin>>a;
    func(a);
    cout<<func(5)<<endl;
}