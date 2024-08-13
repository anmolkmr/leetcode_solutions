class Solution {
public:
    void solve(int ind,vector<int> &ds,int target,vector<int>& candidates,vector<vector<int>> &ans){
       // if(ind>=candidates.size())return ;
        // if(target==0)
        // {
        //     ans.push_back(ds);
        //     return ;
        // }
        if(target==0||ind==candidates.size())
        {
            if(target==0)
            ans.push_back(ds);
            return;
        }
        
       for(int i=ind;i<candidates.size();i++){
        if(i>ind&&candidates[i]==candidates[i-1])continue;
        if(candidates[i]>target)break;
        ds.push_back(candidates[i]);
        solve(i+1,ds,target-candidates[i],candidates,ans);
        ds.pop_back();
       }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,ds,target,candidates,ans);
        return ans;
    }
};