class Solution {
public:
    void solve(vector<int> &ds,vector<int> &freq,vector<int>& nums,vector<vector<int>> &ans)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                solve(ds,freq,nums,ans);
                ds.pop_back();
                freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(n);
        solve(ds,freq,nums,ans);
        return ans; 
    }
};