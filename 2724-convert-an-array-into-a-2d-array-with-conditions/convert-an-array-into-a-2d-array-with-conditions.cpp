class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<vector<int>> res;
        int count=0;
        vector<int> temp;
        while(count!=nums.size())
        {
            for(auto it:mp)
            {
                //cout<<it.first;
                if(mp[it.first]>0)
                {
                    temp.push_back(it.first);
                    count++;
                    cout<<count;
                }
                mp[it.first]--;
                if(mp[it.first]==0)
                mp[it.first]=-1;
            }
            res.push_back(temp);
            temp.clear();

        }
        return res;
    }
};