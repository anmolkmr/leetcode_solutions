class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size(),sum=0;
        vector<int> prefix,suffix(n),res(n);
        for(auto it:nums)
        {
            sum+=it;
            prefix.push_back(sum);
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=nums[i];
            suffix[i]=sum;
        }
        for(int i=0;i<n;i++)
        {
            res[i]=(suffix[i]-nums[i]*(n-i))+(nums[i]*(i+1)-prefix[i]);
        }
    return res;

    }
};