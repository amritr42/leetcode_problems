class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       map<int,int> mp;
       vector<int> c;
       int n=nums.size();
       for(int i=0;i<n;i++){
           int x=target-nums[i];
           if(mp.find(x)!=mp.end()){
               auto it=mp.find(x);
               c.push_back(it->second);
               c.push_back(i);
           }
           mp[nums[i]]=i;
       }
      return c ;
    }
   // return c ;
                            
};