class Solution {
public:
    void solve(int ind,vector<int> &ds,vector<int> &candidates,int t,vector<vector<int>> &ans){
        if(ind>=candidates.size()){
            if(t==0){
                ans.push_back(ds);
            }
            return ;
        }
        if(t>=candidates[ind]){
        ds.push_back(candidates[ind]);
        solve(ind,ds,candidates,t-candidates[ind],ans);
        ds.pop_back();}
        solve(ind+1,ds,candidates,t,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,ds,candidates,target,ans);
        return ans;

    }
};