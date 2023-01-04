#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j,k, n,tmp, cn=1;
    int l, sum=0;
    cin>>n;
    int hg[n];
    for(i=0;i<n;i++)
    {
        cin>>hg[i];
             sum=sum+hg[i];
    }
       sum=sum/2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(hg[j]>hg[j+1])
            {
                tmp=hg[j];
                hg[j]=hg[j+1];
                hg[j+1]=tmp;
            }
        }
    }
      //cout<<sum<<endl;
    l=hg[n-1];
     //cout<<l;
    for(i=n-2;l<=sum;i--)
    {
        l=l+hg[i];
        cn++;
    }
    cout<<cn<<endl;
}
