#include<bits/stdc++.h>
using namespace std;
int setBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}
void unique_two(int a[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^a[i];
    }
    int tempxor=xorsum;
    int pos;
    int setbit=0;
    while(setbit!=1)
    {
        setbit= xorsum & 1;
        pos++;
        xorsum= xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(a[i],pos-1))
        {
           newxor=newxor^a[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor);
}
int main()
{
    int arr[]={1,2,3,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    unique_two(a,n);
    return 0;
}
