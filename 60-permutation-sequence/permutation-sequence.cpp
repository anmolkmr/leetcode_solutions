class Solution {
public:
    void solve(vector<int> &nums,int k,string &ans,int fact)
    {
        
        if(nums.size()==0)return ;
        fact=fact/nums.size(); 
        int temp=nums[k/fact];
        ans+=to_string(temp);
        nums.erase(nums.begin()+k/fact); 
        if(nums.size()==0)return ;  
        solve(nums,k%fact,ans,fact);
    }
    string getPermutation(int n, int k) {
        vector<int> nums;
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact*=i;
            nums.push_back(i);
        }
        k=k-1;
        string ans="";
        solve(nums,k,ans,fact);
        return ans;
    }
};