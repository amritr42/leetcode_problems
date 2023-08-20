class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int l,h;
        int st=0,e=1;
        for(int i=1;i<n;i++){
            l=i-1;
            h=i;
            while(l>=0&&h<n&&s[l]==s[h]){
                if((h-l+1)>e){
                    st=l;
                    e=h-l+1;
                }
                l--;
                h++;
            }
             l=i-1;
            h=i+1;
            while(l>=0&&h<n&&s[l]==s[h]){
                if((h-l+1)>e){
                    st=l;
                    e=h-l+1;
                }
                l--;
                h++;
            }
        }
        string x;
        for(int i=st;i<=(e+st-1);i++){
            x=x+s[i];
        }
        return x;
    }
};