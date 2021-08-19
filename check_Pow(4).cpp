#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0){return false;}
        else if(n==1){
            return true;
        }
        if(n%4==0){
            return isPowerOfFour(n/4);
        }
        else
            return false;
    }
};

int main()
{
    int n;
    cin>>n;
    Solution a;
    cout<<a.isPowerOfFour(n);
    return 0;
}
