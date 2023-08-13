class Solution {
public:
    int findMin(vector<int>& a) {
       int u;
        int l=0;
        int h=a.size()-1;
        if(a.size()==1){
            return a[0];
        }
        while(l<=h){
            int m=(l+h)/2;
            if(a[0]<=a[m]&&a[m+1]<=a[h]){
                u=m;
                break;
            }
            if(a[l]<=a[m]){
                l=m+1;
            }
            else if(a[m]<a[h]){
                h=m;
            }
        }
        cout<<u;
        return min(a[0],a[u+1]);
        
    }
};