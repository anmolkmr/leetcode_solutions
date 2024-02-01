class Solution {
public:
    bool isvalid(vector<int> &nums,int k) {
        for(int i=0;i<=nums.size()-3;i=i+3) {
            if((nums[i+2]-nums[i])>k)
            return false;
        }
        return true;
    }
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(isvalid(nums,k))
        {   
            for(int i=0;i<=nums.size()-3;i=i+3) {
                vector<int> temp;
                for(int j=i;j<i+3;j++) {
                    temp.push_back(nums[j]);
                }
                ans.push_back(temp);
            }
        } 
        return ans;
    }
};