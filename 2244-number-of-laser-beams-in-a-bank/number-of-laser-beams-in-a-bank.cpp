class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> nums;
        if(bank.size()==1)return 0;
        for(auto it:bank)
        {
            int cnt=0;
            for(auto it1:it)
            {
                if(it1=='1')
                cnt++;
            }
            if(cnt)
            nums.push_back(cnt);
        }
        if(nums.size()==0||nums.size()==1)
        return 0;
        int beams=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            beams+=nums[i]*nums[i+1];
        }
        return beams;
    }
};