class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0,n=nums.size();
        int sums[n];
        map<int,int> m;
        sums[0] = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            sums[i]=nums[i]+sums[i-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(sums[i]==k)
                ans++;
            if(m.find(sums[i]-k)!=m.end())
            {
                ans=ans+m[sums[i]-k];
            }
            m[sums[i]]++;
            
        }

        return ans;
        
    }
};