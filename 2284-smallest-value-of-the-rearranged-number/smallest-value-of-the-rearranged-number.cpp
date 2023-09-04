class Solution {
public:
    long long convert(vector<int> nums)
    {
        long long n=0;
        for(auto it:nums)
        {
            n=(n*10)+it;
        }
        return n;
    }
    long long smallestNumber(long long num) {
        if(num==0)return 0;
        vector<int> nums;
        long long dummy=abs(num);
        int dig=0;
        while(dummy)
        {
            dig=dummy%10;
            nums.push_back(dig);
            dummy=dummy/10;
        }
        if(num<0)
        {
            sort(nums.begin(),nums.end(),greater<int>());
            return convert(nums)*-1;
        }
        else{
            sort(nums.begin(),nums.end());
            int count=0;
            if(nums[0]==0){
            for(auto it:nums)
            {
                if(it==0)
                count++;
            }
            if(count<nums.size())
            swap(nums[0],nums[count]);
            }
            return convert(nums);
        }
        return 7;
    }
};