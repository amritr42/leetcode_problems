class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        vector<int> r;
        for(int k=0;k<n+m;k++){
            if(i<n&&j<m){
                if(nums1[i]<=nums2[j]){
                    r.push_back(nums1[i]);
                    i++;
                }
                else{
                    r.push_back(nums2[j]);
                    j++;
                }
            }
            else if(i>=n&&j<m){
                r.push_back(nums2[j]);
                j++;
            }
            else if(i<n &&j>=m) {
                r.push_back(nums1[i]);
                i++;
            }

        }
        double res=0;
        if(r.size()%2==0){
            res=0.5*(r[r.size()/2-1]+r[r.size()/2]);
        }
        else{
            res=r[r.size()/2];
        }
        for(int k=0;k<r.size();k++){
       
            
        }

        return res;
    }
};