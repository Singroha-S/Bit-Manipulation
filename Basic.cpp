#include<bits/stdc++.h>
using namespace std;
int getbit(int n, int pos)
{
    return((n & (1<<pos))!=0);
}
int setbit(int n,int pos)
{
    return (n | (1<<pos));
}
int clearbit(int n,int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}
int updatebit(int n, int pos, int val)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (val<<pos));
}
int togglebit(int n, int pos)
{
  return (n xor (1<<pos));
}
int main()
{
    //cout<<getbit(5,2)<<endl;
    //cout<<setbit(4,1);
    //cout<<clearbit(5,2);
    cout<<updatebit(5,1,1);

    return 0;
}
