class Solution {
public:
    void findbin(string s,vector<string> &bin,int n)
    {
        if(s.length()==n)
        {
            bin.push_back(s);
            return ;
        }
        findbin(s+"0",bin,n);
        findbin(s+"1",bin,n);
    }
    bool find(vector<string> &n,string t)
    {
        for(auto it:n)
        {
            if(it==t)
            return true;
        }
        return false;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string> bin;
        string s="";
        int n=nums[0].length();
        findbin(s,bin,n);
        for(auto it:bin)
        {
            if(!find(nums,it))
            return it;
        }
        return "10001";
    }
};