class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1=INT_MIN,e2=INT_MIN;
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(c1==0&nums[i]!=e2){
                e1=nums[i];
                c1++;
            }
            else if(c2==0&&nums[i]!=e1){
                c2++;
                e2=nums[i];
            }
            else if(nums[i]==e1){
                c1++;
            }
            else if(nums[i]==e2){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==e1)c1++;
            if(nums[i]==e2)c2++;
        }
        cout<<c1<<c2<<nums.size()/3;
        if(c1>nums.size()/3&&c2>nums.size()/3)
        return{e1,e2};
        if(c1>nums.size()/3)
        return{e1};
        if(c2>nums.size()/3)
        return{e2};
        return{};
        
    }
};