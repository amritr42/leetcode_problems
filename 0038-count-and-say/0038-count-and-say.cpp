class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        int count =0;
        string s=countAndSay(n-1);
       // s=s;
        string r="";
        cout<<s<<" "<<"("<<s.size()<<")";
        for(int i=0;i<s.size();i++){
           // cout<<"ho";
            count++;
            //cout<<" "<<count;
           
            if(i==s.size()-1||s[i]!=s[i+1]){
             r=r+char(count+48);
             r=r+(char)((int)s[i]);
             count=0;
            }
        }
        return r;

        
    }
};