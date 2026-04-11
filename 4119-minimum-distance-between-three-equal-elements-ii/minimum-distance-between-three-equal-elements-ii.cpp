class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<long long,vector<long long>> mp;
        for(long long i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        long long mini= INT_MAX;
        for(auto it:mp){
            if(mp[it.first].size()>2){
                for(long long i=0;i<it.second.size()-2;i++){
                    mini=min(mini,(it.second[i+2]-it.second[i])+(it.second[i+1]-it.second[i])+(it.second[i+2]-it.second[i+1]));
                }
            }
        }
        return mini== INT_MAX?-1:mini;
    }
};