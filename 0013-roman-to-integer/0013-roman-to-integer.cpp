class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100,mp['D']=500,mp['M']=1000;
        int n=s.size();
        int r=0,p,q;
        for(int i=0;i<n;i++){
            q=0;
            p=mp[s[i]];
            if(i+1<n)
            q=mp[s[i+1]];
            if(p>=q){
                r=r+p;
            }
            else{
                r=r+q-p;
                i++;
            }
            cout<<r<<"\n";
        }
        return r;
        
    }
};