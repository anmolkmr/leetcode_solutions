class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int num=0;
        vector<int> temp;
        map<int,int> mp;
        for(auto it:nums)
        mp[it]++;
        // auto it=mp.end(),end=mp.begin();
        // it--;
        // while(it!=end)
        // {
        //     temp.push_back(it->second);
        //     it--;
        // }
        for(auto it:mp)
        temp.push_back(it.second);
        // for(auto it:temp)
        // cout<<it<<endl;
        for(int i=temp.size()-1;i>0;i--)
        {
            num+=temp[i];
            temp[i-1]+=temp[i];
        }
        return num;
    }
};