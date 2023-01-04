#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j,k, l, cn=0;
    char s[101], t[101];
    cin>> s >> t;
    l=strlen(s);
    for(i=0,j=l-1; i<l; i++, j--)
    {
        if(s[i]==t[j]) cn++;
    }
    if(cn==l) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
