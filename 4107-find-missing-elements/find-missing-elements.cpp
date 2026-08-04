class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minimum_element=*min_element(nums.begin(),nums.end());
        int maximum_element=*max_element(nums.begin(),nums.end());
        // sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=minimum_element;i<=maximum_element;i++){
            int flag=0;
            for(auto it:nums){
                if(it==i){
                    flag=1;
                }
            }
            if(flag==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};