#include<iostream>
using namespace std;

int main()
{
    int n,k,i,j=0, l;
    cin>>n>>k;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    l=a[k];
    for(i=1;i<=n;i++)
    {
        if(a[i]>=l & a[i]>=1)j++;
    }
    cout<<j<<"\n";
}
