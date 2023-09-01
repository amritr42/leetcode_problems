class Solution {
public:
    int myAtoi(string s) {
        double res=0,x=0;
        int neg=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            cout<<s[i];
            if(s[i]==' '&&x==0){
                continue;
            }
            else if(s[i]=='+'&&x==0){
                x++;
                continue;
            }
            else if(s[i]=='-'&&x==0){
                x++;
                neg=1;
            }
           else if(s[i]>=48&&s[i]<=57){
               x++;
                res=res*10+(int)(s[i]-48);
            }
            else
            break;
        }
        if(neg==1){
            res=-res;
            cout<<"jk";
        }
        if(res<INT_MIN){
            res=INT_MIN;
            cout<<"ho";
        }
       // int x=res/INT_MAX;
       // cout<<x;
       // res=res-x*INT_MAX;
       if(res>INT_MAX){
           res=INT_MAX;
           cout<<"ko";
       }
        cout<<neg;
        return (int)res; 
    }
    
};