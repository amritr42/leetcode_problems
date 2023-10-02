class Solution {
    void solve(string digits,string op[],string o,vector<string>&ans,int index){
        if(index>=digits.size()){
            ans.push_back(o);
            return;
        }
        int n=digits[index]-'0';
        string s=op[n];
        for(int i=0;i<s.size();i++){
            o.push_back(s[i]);
            solve(digits,op,o,ans,index+1);
            o.pop_back();
        }
    }
public:

    vector<string> letterCombinations(string digits) {
        string op[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        //string o;
        if(digits.size()==0){
            return ans;
        }
        string o="";
        int index=0;
        solve(digits,op,o,ans,index);
        return ans;
        }
        


};