class Solution {
public:
    void solve(int ind,vector<int>& cand,int t,vector<vector<int>> &ans,vector<int> &ds){
        if(t==0){
            ans.push_back(ds);
            return;
        }
        if(ind>=cand.size())return ;
        if(cand[ind]<=t){
            ds.push_back(cand[ind]);
            solve(ind,cand,t-cand[ind],ans,ds);
            ds.pop_back();
        }
        solve(ind+1,cand,t,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,candidates,target,ans,ds);
        return ans;
    }
};