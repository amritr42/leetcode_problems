class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int m,l=0,h=n-1;
        vector<int>r(2,-1);
        if(n==0){
            return {-1,-1};
        }
        if(n==1){
            if(target==nums[0]){
                return {0,0};
            }
            else{
                return {-1,-1};
            }
        }
        if(nums[0]==nums[n-1]){
            if(nums[0]==target){
                return {0,n-1};
            }
            return {-1,-1};
        }
        while(l<=h){
            m=(l+h)/2;
            if(nums[m]==target){
                r[0]=m;
                h=m-1;
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        l=0,h=n-1;
        while(l<=h){
            m=(l+h)/2;
            if(nums[m]==target){
                r[1]=m;
                l=m+1;
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }

       
        return r;
        
    }
};