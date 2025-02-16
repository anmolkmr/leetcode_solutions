class Solution {
public:
    bool solve(int ind,int n,vector<int> &used,vector<int> &res){
        if(ind>=res.size())return true;
        if(res[ind] != -1) {
            return solve(ind+1, n, used, res);
        }
        for(int i=n;i>=1;i--){
            if(used[i]!=-1)continue;
            used[i]=i;
            res[ind]=i;
            if(i==1){
                if(solve(ind+1,n,used,res))
                return true;
            }
            else{
                int k=ind+res[ind];
                if(k<res.size()&&res[k]==-1)
                {
                    res[k]=i;
                    if(solve(ind+1,n,used,res))
                    return true;
                    res[k]=-1;
                }
            }
            used[i]=-1;
            res[ind]=-1;
        }
        return false;
    }
    vector<int> constructDistancedSequence(int n) {
        vector<int> used(n+1,-1),res(2*n-1,-1);
        solve(0,n,used,res);
        return res;
    }
};