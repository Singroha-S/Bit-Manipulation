#include<bits/stdc++.h>
using namespace std;
int MSB(int n)
{
    n |= n>>1;
    n |= n>>2;
    n |= n>>4;
    n |= n>>8;
    n |= n>>16;
    n = n + 1;
    return (n >> 1);
}
int main()
{
    int n=10;
    cout<<MSB(n);
    return 0;
}
