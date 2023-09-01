class Solution {
public:
    int mySqrt(int x) {
        int i;
        double r;
        if(x==0||x==1){
            return x;
        }
        
        for(i=0;i<x;i++){
            r=(double)i*i;
            if(r>INT_MAX){
            break;
        }
            if(i*i>x){
                break;
            }
        }
        return i-1;
    }
};