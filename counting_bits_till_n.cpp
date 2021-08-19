#include<bits/stdc++.h>
using namespace std;

int count(int c)
{
    int cnt=0;
    while(c)
    {
        c=c & (c-1);
        cnt++;
    }
    return cnt;
}

void fn(int n)
{
    int a[n];
    for(int i=0;i<=n;i++)
    {
        a[i]=count(i);
    }
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    fn(n);
    return 0;
}
