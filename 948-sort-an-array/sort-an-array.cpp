class Solution {
public:
    void merge(vector<int> &arr,int l,int m,int r)
    {
        int i=l;
        int j=m+1;
        vector<int> res;
        while(i<=m&&j<=r)
        {
            if(arr[i]>=arr[j])
            {
                res.push_back(arr[j]);
                j++;
            }
            else{
                res.push_back(arr[i]);
                i++;
            }
        }
        while(i<=m)
        {
            res.push_back(arr[i]);
            i++;
        }
        while(j<=r)
        {
            res.push_back(arr[j]);
            j++;
        }
        int index=0;
        for(int i=l;i<=r;i++)
        {
            arr[i]=res[index];
            index++;
        }
    }
    void mergesort(vector<int> &nums,int l,int r)
    {
        if(l<r)
        {
            int m=l+(r-l)/2;
            mergesort(nums,l,m);
            mergesort(nums,m+1,r);
            merge(nums,l,m,r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        mergesort(nums,l,r);
        return nums;      
    }
};