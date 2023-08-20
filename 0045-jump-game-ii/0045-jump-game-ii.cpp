class Solution {
public:
    int jump(vector<int>& nums) {
        int p=0,d=0,j=0;
        for(int i=0;i<nums.size()-1;i++){
            d=(d>(i+nums[i])?d:i+nums[i]);
            if(p==i){
                j++;
                p=d;
                
            }
        }
      return j;  
    }
};