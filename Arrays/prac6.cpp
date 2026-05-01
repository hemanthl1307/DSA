//To find unique element in an array
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int a[]={1,2,3,1,2,3,4,4,7};
    for(int i=0;i<9;i++)
    {
        int count=0;
        for(int j=0;j<9;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    if(count==1)
    {
        cout<<"Unique Element is:"<<a[i]<<endl;
    }
}
    return 0;
}