class Solution {
public:
    bool canJump(vector<int>& nums) {
       //int n=sizeof(nums)/sizeof(nums[0]);
       //cout<<n;
      // int n=nums.size();
        
        int r=0;
        for(int i=0;i<nums.size();i++){
            if(i>r)
            return false;
            r=max(r,nums[i]+i);
        }
        return true;
    }
};