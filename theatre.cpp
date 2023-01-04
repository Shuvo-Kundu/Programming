#include<iostream>
#include<string>
using namespace std;

int main()
{
    unsigned long long int n,m,a, flag1, flag2;
    cin>>n>>m>>a;
    if (n%a==0) flag1=n/a;
    else flag1 = n/a +1;
    if (m%a==0) flag2=m/a;
    else flag2 = m/a +1;
    cout<<flag1*flag2<<"\n";
}
