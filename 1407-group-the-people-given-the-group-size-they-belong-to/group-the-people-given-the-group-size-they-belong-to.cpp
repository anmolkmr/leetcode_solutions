class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        set<int> s;
        for(auto it:groupSizes)
        s.insert(it);
        vector<int> temp;
        for(auto it:s)
        {
            for(int i=0;i<groupSizes.size();i++)
            {
                if(groupSizes[i]==it)
                {
                if(temp.size()>=it)
                {
                    ans.push_back(temp);
                    temp.clear();
                }
                temp.push_back(i);
                }
                
            }
            if(temp.size())
            {ans.push_back(temp);
            temp.clear();}
        }
        return ans;
    }
};