class Solution {
public:
    bool isap(vector<int> &nums)
    {
        if(nums.size()>1)
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[1]-nums[0]!=nums[i+1]-nums[i])
                return false;
            }
            
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++)
        {
            vector<int> temp;
            for(int j=l[i];j<=r[i];j++)
            {
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            ans.push_back(isap(temp));
        }
        return ans;
    }
};