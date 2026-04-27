class Solution {
public:
    void solve(int ind,vector<int> ds,vector<vector<int>> &ans,int tar,vector<int>& can){
        // if(ind>=can.size()){
        //     if(tar==0){
        //         ans.push_back(ds);
                
        //     }
        //     return ;
        // }

        if(tar==0){
            ans.push_back(ds);
            return;
        }

        for(int i=ind;i<can.size();i++){
            if(i>ind&&can[i-1]==can[i])continue;
            if(tar<can[i])break;
            ds.push_back(can[i]);
            solve(i+1,ds,ans,tar-can[i],can);
            ds.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        solve(0,ds,ans,target,candidates);
        return ans;
    }
};