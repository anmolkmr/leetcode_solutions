class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n = word.length(),i;
        long long int x=0;
        vector<int> ans(n,0);
        for(i = 0; i < n; i++){
            x = x*10+(word[i]-'0');
            x = x%m;
            if(x==0){
                ans[i] = 1;
            }
        }
        return ans;
    }
};