class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long score=0;
        for(long long i=0;i<nums.size();i++){
            for(long long j=i+1;j<nums.size();j++){
                for(long long k=j+1;k<nums.size();k++){
                    score = max(score, (long long)(nums[i] - nums[j]) * nums[k]);
                }
            }
        }
        return score;
    }
};