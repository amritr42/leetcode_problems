class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        int l=0,e=-1;
        for(int i=0;i<nums.size();i++){
          if(nums[i]%2==0){
              mp[nums[i]]++;
              if(l<mp[nums[i]]){
               l=mp[nums[i]];
               e=nums[i];
              }
              else if(l==mp[nums[i]]&&nums[i]<e){
                  e=nums[i];
              }
          }
        }
       
        return e;
        
    }
};