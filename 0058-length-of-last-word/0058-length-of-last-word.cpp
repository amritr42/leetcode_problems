class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int l=0,m=0;
        int i=0;
        while(s[i]!='\0'){
           
            
            if(s[i]==' '){
                //cout<<l<<" ";
              
                  //m=l;

            
              l=0;
            }
            else{
                l++;
            }
            i++;
             if(l!=0){
             m=l;
            }
        }
        return m>l?m:l;
    }
};