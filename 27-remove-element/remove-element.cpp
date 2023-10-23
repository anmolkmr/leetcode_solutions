class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int i=0,j=nums.size()-1,count=0;
      for(auto it:nums)
      if(it==val)count++;
      while(i<nums.size()&&i<=j)
      {
          if(nums[i]==val)
          {
              swap(nums[i],nums[j]);
          }
          else
          {
              i++;
          }
          if(nums[j]==val)
          {
              j--;
          }
      }
      return nums.size()-count;
    }
};