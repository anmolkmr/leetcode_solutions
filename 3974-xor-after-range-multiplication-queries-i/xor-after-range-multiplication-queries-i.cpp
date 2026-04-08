class Solution {
public:
    int xorAfterQueries(vector<int>& nums1, vector<vector<int>>& queries) {
        vector<long> nums;
        for(auto it:nums1){
            nums.push_back(it);
        }
        for(auto it:queries){
            for(long long i=it[0];i<=it[1];i+=it[2]){
                nums[i]=(nums[i]%1000000007*it[3]%1000000007);
            }
        }
        long long l=0;
        for(long long i=1;i<nums.size();i++){
            nums[0]=nums[0]^nums[i];
        }
        return nums[0];
    }
};