#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int main()
{
    int a[5][5],i,j,k,f1, f2, cnt=0;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
    {
        cin>>a[i][j];
    }
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
    {
        if(a[i][j]==1) f1=i+1, f2=j+1;
    }
    cnt= abs(3-f1)+abs(3-f2);
    cout<<cnt<<"\n";
}
