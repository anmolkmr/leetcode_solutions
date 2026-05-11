class Solution {
public:
    vector<int> breaker(int n){
        vector<int> ans;
        while(n){
            ans.push_back(n%10);
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(auto it:nums){
            vector<int> temp=breaker(it);
            for(auto it1:temp){
                ans.push_back(it1);
            }
        }
        return ans;
    }
};