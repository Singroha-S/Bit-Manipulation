#include<bits/stdc++.h>
using namespace std;
void print_subset(int a[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    print_subset(a,n);
    return 0;
}
