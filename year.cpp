#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j,k[4], l[4], n, cn=0;
    cin>>n;
    for(i=0;i<4;i++)
    {
        k[i] = n%10;
        n=n/10;
        //cout<<k[i]<<endl;
    }
    one:
        cn=0;n++;
        for(i=0;i<4;i++)
        {
            l[i] = n%10;
            n=n/10;
        }
        for(i=0;i<4;i++)
        {
             for(j=0;j<4;j++)
            {
                if(l[i]==k[j]) goto one;
                else cn++;
            }
        }
        i=l[0]+l[1]*10+l[2]*100+l[3]*1000;
        if(cn==4) cout<<i<<endl;
}
