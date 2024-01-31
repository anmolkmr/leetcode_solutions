class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int> ans;
        for(int i=temperatures.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                ans.push_back(0);
                st.push({temperatures[i],i});
            }
            else {
                while(!st.empty()&&st.top().first<=temperatures[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    ans.push_back(0);
                    st.push({temperatures[i],i});
                }
                else {
                    ans.push_back(st.top().second-i);
                    st.push({temperatures[i],i});
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};