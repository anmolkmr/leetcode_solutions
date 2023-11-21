class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index1,index2,n=nums.size()-1;
        for(int i=n;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {index1=i-1;break;}
        }
        for(int i=n;i>=0;i--)
        {
            if(nums[i]>nums[index1])
            {index2=i;break;}
        }
        cout<<index1<<endl;
        if(index1>=0&&index1<=n&&index2>=0&&index2<=n)
        {
            swap(nums[index1],nums[index2]);
            int i=index1+1;
            int j=n;
            while(i<=j)
            {
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        else{sort(nums.begin(),nums.end());}
    }
};