class Solution {
public:
    int countPrimes(int n) {
        int c=0;
        
        vector<bool> p(n,true);
        for(int  i=2;i*i<p.size();i++){
            if(p[i])
            for(long long j=(long long)i*i;j<p.size();j+=i){
                p[j]=false;
            }
        }
        for(int i=2;i<p.size();i++){
            if(p[i]){
                c++;
            }
        }
        return c;
    }
};