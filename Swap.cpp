#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=3,b=4;
    a^=b;
    b^=a;
    a^=b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b;
    return 0;
}
