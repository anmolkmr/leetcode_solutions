class Solution {
public:
    bool check(int m,vector<int>& nums, vector<vector<int>>& queries){
        vector<int> diff(nums.size()+1);
        for(int i=0;i<m;i++){
            diff[queries[i][0]]+=queries[i][2];
            diff[queries[i][1]+1]-=queries[i][2];
        }
        vector<int> pref;
        int sum=0;
        for(int i=0;i<diff.size();i++)
        {
            sum+=diff[i];
            pref.push_back(sum);
            // cout<<sum<<endl;
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pref[i])
            return false;
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int left=0,right=queries.size();
        if(!check(right,nums,queries))return -1;
        while(left<=right){
            int mid=left + (right - left) / 2;
            if(check(mid,nums,queries)){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
        
    }
};