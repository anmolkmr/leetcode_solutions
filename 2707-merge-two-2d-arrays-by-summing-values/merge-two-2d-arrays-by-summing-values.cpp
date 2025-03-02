class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int ind1=0,ind2=0;
        while(ind1<nums1.size()&&ind2<nums2.size()){
            if(nums1[ind1][0]==nums2[ind2][0]){
                ans.push_back({nums1[ind1][0],nums1[ind1][1]+nums2[ind2][1]});
                ind1++;
                ind2++;
            }
            else if(nums1[ind1][0]<nums2[ind2][0]){
                ans.push_back({nums1[ind1][0],nums1[ind1][1]});
                ind1++;
            }
            else if(nums1[ind1][0]>nums2[ind2][0]){
                ans.push_back({nums2[ind2][0],nums2[ind2][1]});
                ind2++;
            }
        }
        while(ind1<nums1.size()){
             ans.push_back({nums1[ind1][0],nums1[ind1][1]});
                ind1++;
        }
        while(ind2<nums2.size()){
             ans.push_back({nums2[ind2][0],nums2[ind2][1]});
                ind2++;
        }
        return ans;
    }
};