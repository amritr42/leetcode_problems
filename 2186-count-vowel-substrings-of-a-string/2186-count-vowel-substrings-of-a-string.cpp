class Solution {
public:
    bool check(vector<bool> c){
        for(int i=0;i<5;i++){
            if(c[i]==false)
            return false;
        }
        return true;
    }
    int countVowelSubstrings(string word) {
        int t=0;
        vector<bool> c(5,false);
        for(int i=0;i<word.size();i++){
              vector<bool> c(5,false);
            for(int j=i;j<word.size();j++){
                if(word[j]=='a'){
                    c[0]=true;
                }
                else if(word[j]=='e')
                c[1]=true;
                else if(word[j]=='i')
                c[2]=true;
               else if(word[j]=='o')
                c[3]=true;
                else if(word[j]=='u')
                c[4]=true;
                else 
                break;
                if (c[0]&&c[1]&&c[2]&&c[3]&&c[4])
                t++;
            }
        }
        return t;
    }
};