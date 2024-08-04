class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> temp;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                temp.push_back(sum);
            }
        }
        sort(temp.begin(),temp.end());
        int ans=0;
        for(int k=left-1;k<right;k++)
        ans=(ans+temp[k])%1000000007;
        return ans;
    }
};