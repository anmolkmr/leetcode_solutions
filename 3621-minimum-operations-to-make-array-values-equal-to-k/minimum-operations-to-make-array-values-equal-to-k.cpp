class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        map<int,int> mp;
        int n=INT_MAX;
        for(auto it:nums){
            mp[it]++;
            n=min(n,it);
        }
        if(k>n)
        return -1;
        if(n==k)
        return mp.size()-1;
        return mp.size();

    }
};