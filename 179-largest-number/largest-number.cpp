class Solution {
public:
    string largestNumber(vector<int>& nums) {
        for(int j=0;j<nums.size()-1;j++){
        for(int i=0;i<nums.size()-1;i++){
            string a=to_string(nums[i])+to_string(nums[i+1]);
            string b=to_string(nums[i+1])+to_string(nums[i]);

            if(a<b){
                swap(nums[i],nums[i+1]);
            }
        }
        }
        string ans="";
        for(auto it:nums)
        ans+=to_string(it);
        if(ans[0]=='0'){
            if(stoi(ans)==0)return "0";
        }
        return ans;
    }
};
