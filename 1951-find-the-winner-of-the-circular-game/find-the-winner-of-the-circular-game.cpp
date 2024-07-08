class Solution {
public:
    int solve(vector<int> t,int k,int i){
        if(t.size()==1)
        return t[0];
        int ind=(i+k)%t.size();
        t.erase(t.begin()+ind);
        return solve(t,k,ind);
        
        
    }
    int findTheWinner(int n, int k) {
        vector<int> t;
        for(int i=1;i<=n;i++){
            t.push_back(i);
        }
        return solve(t,k-1,0);
    }
};