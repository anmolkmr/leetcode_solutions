class Solution {
public:
    void merge(int l,int m,int r,vector<int> &n){
        vector<int> res;
        int i=l,j=m+1;
        while(i<=m&&j<=r){
            if(n[i]>=n[j]){
                res.push_back(n[j]);
                j++;
            }else{
                res.push_back(n[i]);
                i++;
            }
        }

        while(i<=m){
            res.push_back(n[i]);
            i++;
        }
        while(j<=r){
            res.push_back(n[j]);
            j++;
        }
        int ind=0;
        for(int k=l;k<=r;k++)
        {
            n[k]=res[ind];
            ind++;
        }


    }
    void mergeSort(int l,int r,vector<int> &n){
        int mid=l+(r-l)/2;
        if(l<r){
            mergeSort(l,mid,n);
            mergeSort(mid+1,r,n);
            merge(l,mid,r,n);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergeSort(0,n-1,nums);
        return nums;
    }
};