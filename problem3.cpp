#include<iostream>
using namespace std;
int main()
{
    long long int n,i,sum=0;
    cout<<"Enter the value of array size."<<endl;
    cin>>n;
    long long int a[n];
     cout<<"Enter the array element."<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    return 0;

}
