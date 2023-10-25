class Solution {
public:
    void rev(int i,int j,vector<int> &nums)
    {
        while(i<=j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1)
        return;
        k=k%nums.size();
        rev(0,nums.size()-k-1,nums);
        rev(nums.size()-k,nums.size()-1,nums);
        rev(0,nums.size()-1,nums);
    }
};