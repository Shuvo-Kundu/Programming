#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a, i, n;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        a = s.length();
        if (a>10)
            {
                cout<<s[0]<<a-2<<s[a-1]<<"\n";
            }
        else cout<<s<<"\n";
    }
}
