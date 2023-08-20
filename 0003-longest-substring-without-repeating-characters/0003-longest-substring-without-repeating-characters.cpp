class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int c[256]={0};
        int i=0,j=0,ans=0;
        while(j<s.size()){
            c[s[j]]++;
            while(c[s[j]]>1){
                c[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};