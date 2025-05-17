class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,low=0,high=nums.size()-1;
        while(i<=high)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[low]);
                i++;
                low++;
            }
            else if(nums[i]==2)
            {
                swap(nums[i],nums[high]);
                high--;
            }
            else
            i++;
        }
    }
};