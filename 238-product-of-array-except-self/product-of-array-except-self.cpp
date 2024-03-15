class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix,suffix,ans;
        prefix.push_back(1);
        suffix.push_back(1);
        for(int i=0;i<nums.size()-1;i++)
        prefix.push_back(prefix[i]*nums[i]);
        int ind=0;
        for(int i=nums.size()-1;i>0;i--)
        {
            suffix.push_back(suffix[ind]*nums[i]);
            ind++;
        }
        reverse(suffix.begin(),suffix.end());
        for(auto it:prefix)
        cout<<it<<" ";
        cout<<endl;
        for(auto it:suffix)
        cout<<it<<" ";
        for(int i=0;i<nums.size();i++)
        ans.push_back(suffix[i]*prefix[i]);
        return ans;
    }
};