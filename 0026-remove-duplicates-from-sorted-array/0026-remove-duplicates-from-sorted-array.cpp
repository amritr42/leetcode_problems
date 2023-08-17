class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k,c=1;;
        for(int i=0;i<nums.size()-1;i++){
            k=nums[i+1];
            if(k==nums[i]){
                continue;
            }
            else{
                nums[c++]=nums[i+1];
            }
        }
        return c;

        
    }
};