#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j,k, l, n,h, cn=0;
    cin>>n>>h;
    int hg[n];
    for(i=0;i<n;i++)
    {
        cin>>hg[i];
    }
    for(i=0;i<n;i++)
    {
        if(hg[i]<=h) cn++;
        else cn+=2;
    }
    cout<<cn<<endl;


}
