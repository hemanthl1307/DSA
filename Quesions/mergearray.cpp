#include<iostream>
#include<vector>
using namespace std;
void mergearray(vector<int>a,vector<int>b,int m,int n)
{
    // a array size is m and b array size is n and c array size is s=m+n
    int s=m+n;
    vector<int>c(s);
    int i=0,j=0,ind=0;
    while(i<m&& j<n)//check for smaller element and add to the first position
    {
        if(a[i]<=b[j])//if element in array a is smaller add to array c and do ind++
        {
            c[ind]=a[i];
            i++;
            ind++;
        }
        else{//if element in array b is smaller add it to array c and do idex++
            c[ind]=b[j];
            j++;
            ind++;
        }
    }
    while(j<n)//if there are remaining elements in array b then copy to c
    {
        c[ind]=b[j];
        j++;
        ind++;
    }
    while(i < m)//if there are remaining elements in array a then copy to c
    {
    c[ind] = a[i];
    i++;
    ind++;
    }
    //print the array c 
    cout<<"The sorted array is:\n";
    for(int i=0;i<s;i++)
    {
        cout<<c[i]<<" ";
    }
}
int main()
{
    //time complexity is O(m+n)
    //space complexity is O(n)
    vector<int>a={10,20,30};
    vector<int>b={8,9,11};
    mergearray(a,b,3,3);
    return 0;
}