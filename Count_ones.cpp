#include<bits/stdc++.h>
using namespace std;
int count_ones(int n)
{
    int count=0;
    while(n)
    {
        n=n & (n-1);
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_ones(n);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int count_set(int n)
{
    int cnt=0;
    while(n>0)
    {
        int a = n&1;
        if(a==1)
        {
           cnt++;
           n>>=1;
        }
        else
           n>>=1;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_set(n);
    return 0;
}
