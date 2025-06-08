class Solution {
public:
    void lex(int s,int n,vector<int> &ans){
        if(s>n)return ;
        ans.push_back(s);
        for(int i=0;i<=9;i++){
            int k=(s*10)+i;
            lex(k,n,ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i=1;i<=9;i++){
            // ans.push_back(i);
            lex(i,n,ans);
        }
        return ans;
    }
};