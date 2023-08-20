class Solution {
public:
    bool canJump(vector<int>& nums) {
       //int n=sizeof(nums)/sizeof(nums[0]);
       //cout<<n;
       int n=nums.size();
        if(n==1)
        return true;
        int r=0;
        for(int i=0;i<n;i++){
            if(i>r)
            return false;
            r=max(r,nums[i]+i);
        }
        return true;
    }
};