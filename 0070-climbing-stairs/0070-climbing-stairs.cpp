class Solution {
public:
    int climbStairs(int n) {
        vector<int> d(n+1,0);
        d[0]=1;
        for(int i=1;i<n+1;i++){
            d[i]=d[i-1];
            if(i>1){
                d[i]=d[i]+d[i-2];
            }
        }
        return d[n];
    }
};