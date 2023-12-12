class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ind=nums.size()-1;
        return (nums[ind]-1)*(nums[ind-1]-1);
    }
};