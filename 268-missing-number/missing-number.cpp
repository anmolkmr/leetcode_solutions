class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int predicted=(mx*(mx+1))/2,original=0;
        bool zero=false;
        for(auto it:nums)
        {
            if(it==0)zero=true;
            original+=it;
        }
        if(predicted==original){
            if(zero)
            return mx+1;
            else
            return 0;
        }
        else
        return predicted-original;
    }
};