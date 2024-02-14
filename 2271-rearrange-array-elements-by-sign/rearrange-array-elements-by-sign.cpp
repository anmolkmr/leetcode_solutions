class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int positiveind=0,negativeind=1;
        for(auto it:nums)
        {
            if(it>=0){
                ans[positiveind]=it;
                positiveind=positiveind+2;
            }
            else{
                ans[negativeind]=it;
                negativeind=negativeind+2;
            }
        }
        return ans;
    }
};