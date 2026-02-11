class Solution {
public:
    void merge(int l,int m,int r,vector<int> &nums){
        int i=l,j=m+1;
        vector<int> res;
        while(i<=m&&j<=r){
            if(nums[i]<=nums[j]){
                res.push_back(nums[i]);
                i++;
            }
            else{
                res.push_back(nums[j]);
                j++;
            }
        }
        while(i<=m){
            res.push_back(nums[i]);
            i++;
        }
        while(j<=r){
            res.push_back(nums[j]);
            j++;
        }
        int ind=0;
        for(int i=l;i<=r;i++){
            nums[i]=res[ind];
            ind++;
        }
    }
    void mergesort(int l,int r,vector<int> &nums){
        
        if(l<r){
            int mid=l+(r-l)/2;
            mergesort(l,mid,nums);
            mergesort(mid+1,r,nums);
            merge(l,mid,r,nums);

        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(0,nums.size()-1,nums);
        return nums;
    }
};