#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j,n, cnt, fcnt=0 ;
    string s;
    cin>>n;
    cin.ignore();
    for(j=0;j<n;j++)
    {
        getline(cin, s);

        for(i=0, cnt=0;i<5;i++)
        {
            if (s[i]=='1')cnt++;
        }
    if(cnt>=2)fcnt++;
    }
    cout<<fcnt<<"\n";
}

