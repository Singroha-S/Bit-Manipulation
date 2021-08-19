class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        int n=max(x,y);
        while(n){
            int gx = x&1;
                int gy = y&1;
                if(gx!=gy){
                    cnt++;
                }
            n>>=1;
                x>>=1;
                y>>=1;
        }
        return cnt;
    }
};
