class Solution {
public:
    void solve(int ind,vector<int> &ds,int tar,vector<int> &arr,vector<vector<int>> &ans){
        if(tar==0){
            {
                ans.push_back(ds);
                return ;
            }
        }
        if(ind>=arr.size()){
            if(tar==0)
            {
                ans.push_back(ds);
            }
             return ;
        }

        solve(ind+1,ds,tar,arr,ans);
        if(arr[ind]<=tar){
            ds.push_back(arr[ind]);
            solve(ind,ds,tar-arr[ind],arr,ans);
            ds.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,ds,target,candidates,ans);
        return ans;
     }
};