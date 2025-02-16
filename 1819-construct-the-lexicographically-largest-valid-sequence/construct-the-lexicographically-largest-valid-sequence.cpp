class Solution {
public:
    bool solve(int ind,int n,vector<int> &res,vector<bool> &used){
        if(ind>=res.size())
        return true;
        if(res[ind]!=-1)
        {
            return solve(ind+1,n,res,used);
        }
        for(int i=n;i>=1;i--){
            if(used[i]){
                continue;
            }
            used[i]=true;
            res[ind]=i;
            if(i==1){
                if(solve(ind+1,n,res,used))
                return true;
            }
            else{
                int k=ind+res[ind];
                if(k<res.size()&&res[k]==-1){
                    res[k]=i;
                    if(solve(ind+1,n,res,used))
                    return true;

                    res[k]=-1;
                }
            }
            used[i]=false;
            res[ind]=-1;

        }
        return false;
    }
    vector<int> constructDistancedSequence(int n) {
        vector<int> res(2*n-1,-1);
        vector<bool> used(n+1,false);
        solve(0,n,res,used);
        return res;
    }
};