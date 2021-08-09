#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    return (n && !(n & n-1)0);
    //return (!(n & n-1));           //same as below
    //return ((n & n-1)==0);         //gives 1 at zero also
}
int main()
{
    int n;
    cin>>n;
    cout<<check(n);
    return 0;
}
/*
int main()
{
    float n;
    cin>>n;
    while(n>1){
        n=n/2;
    }
    if(n==1)
    {
        cout<<"power";
    }
    else
        cout<<"not power";
    return 0;
}
*/
