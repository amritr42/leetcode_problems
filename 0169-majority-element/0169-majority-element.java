class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        int c=nums[0],ct=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=c&&ct==0){
                c=nums[i];
                ct=1;
            }
            else if(nums[i]==c){
                ct++;
            }
            else{
                ct--;
            }

        }
        return c;

        
    }
}