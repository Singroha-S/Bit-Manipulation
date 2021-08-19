#include<bits/stdc++.h>
using namespace std;

bool getBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos)
{
    return (n | (1<<pos));
}
void unique_three(int a[],int n)
{
    int result=0;
    for(int i=0;i<64;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getBit(a[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result = setBit(result,i);
        }
    }
    cout<< result;
}

int main()
{
    int a[]={3,1,2,3,5,1,2,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    unique_three(a,n);
    return 0;
}
