class Solution {
public:
    int secondLargest(vector<int> &nums){
       sort(nums.begin(),nums.end());
       int n=nums.size()-1,lastIndex=nums[n];
       for(int i=n;i>=0;i--){
        if(nums[i]!=lastIndex)
        return nums[i];
       }
       return -1;
    }
    int minOperations(vector<int>& nums, int k) {
        int min = *min_element(nums.begin(),nums.end());
        if(min<k)return -1;
        int sl=0,count=0;;
        while(true){
            
            sl=secondLargest(nums);
            for(int i=0;i<nums.size();i++){
                if(nums[i]>sl)
                nums[i]=sl;
            }
            if(sl==-1&&k==min)
            return count;
            else if(sl==-1)
            return count+1;
            
            count++;
    
        }
        return count;
    }
};