class Solution {
public:
int get(int n){
    int x=0;
    while(n){
        int c=n%10;
        x+=c*c;
        n=n/10;
    }
    return x;
}
    bool isHappy(int n) {
        map <int,int> mp;
        while(n!=1&&mp[n]<2){
            mp[n]++;
            n=get(n);
}
        if(n==1){
            return true;
        }
        return false;
    }
};