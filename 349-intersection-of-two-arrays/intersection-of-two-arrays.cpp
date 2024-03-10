class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,bool> mp;
        for(auto it:nums1){
            mp[it]=true;
        }
        vector<int> ans;
        for(auto it:nums2){
            if(mp[it]){
                ans.push_back(it);
                mp[it]=false;
            }
        }
        return ans;
        
    }
};