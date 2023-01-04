#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int i,j,l=0, f[101]={0};
    char s[101];
    gets(s);
    for (i=0; i<strlen(s); i++)
    {
        f[s[i]]=1;
    }
        for(j=0; j<=128 ; j++)
        {
            cout<<f[j]<<endl;
            l+=f[j];
        }

    if(l%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
