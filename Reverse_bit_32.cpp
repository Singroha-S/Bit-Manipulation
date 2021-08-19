#include<bits/stdc++.h>
using namespace std;

class solution{
  public:
    unsigned int revbit(unsigned int x){
        unsigned int res=0;
        for(int i=0;i<32;i++){
            unsigned int lsb=x & 1;
            unsigned int revlsb= lsb<<(31-i);
            res|=revlsb;
            x>>=1;
        }
        return res;
    }
};

int main()
{
    unsigned int x;
    cin>>x;
    solution ob;
    cout<<ob.revbit(x);

    return 0;
}
