#include<iostream>
using namespace std;

int main()
{
    int a,i,n,x=0;
    string s;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>s;
        if(s[1]=='+')x=x+1;
        else if(s[1]='-')x=x-1;
    }
    cout<<x<<"\n";
}

