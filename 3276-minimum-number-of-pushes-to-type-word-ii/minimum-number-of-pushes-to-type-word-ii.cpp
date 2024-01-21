class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> mp;
        vector<int> num;
        for(auto it:word)
        mp[it]++;
        for(auto it:mp)
        num.push_back(it.second);
        sort(num.begin(),num.end(),greater<int>());
        for(auto it:num)
        cout<<it<<" ";
        int ind=1;
        int cnt=1;
        int press=0;
        for(int i=0;i<num.size();i++)
        {
            if(cnt>8)
            {cnt=1;ind++;}
            press+=(ind*num[i]);
            cnt++;
        }
        return press;
    }
};