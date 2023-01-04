#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i, j,k, l, n,cn1=0,cn2=0;
    cin>>n;
    char s[n];
    cin>>s;
    l=strlen(s);
    for (i=0;i<l;i++)
    {
        if(s[i]=='A') cn1++;
        else cn2++;
    }
    if(cn1>cn2)cout<<"Anton"<<endl;
    else if(cn2>cn1)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}
