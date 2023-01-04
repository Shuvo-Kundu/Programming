#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0;
    string s1;
    char s2[1000];
    cin>>s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    for(i=0; i<s1.length(); i++)
    {
        if (s1[i]!='a'&& s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i]!='y')
        {
            s2[j]='.';
            j++;
            s2[j]=s1[i];
            //s2.push_back(s1[i]);
            j++;
        }
    }
    s2[j]='\0';
    cout<<s2<<endl;
}
