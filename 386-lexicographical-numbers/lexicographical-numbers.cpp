class Solution {
public:
    void solve(int c,int n,vector<int> &res){
        if(c>n)return ;
        res.push_back(c);
        for(int app=0;app<10;app++){
            int temp=(c*10)+app;
            if(temp>n)return ;
            solve(temp,n,res);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        for(int i=1;i<=9;i++){
            solve(i,n,res);
        }
        return res;
    }
};