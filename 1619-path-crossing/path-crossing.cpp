class Solution {
public:
    bool isPathCrossing(string path) {
        int i=0,j=0;
        set<pair<int,int>> st;
        st.insert({0,0});
        for(auto it:path)
        {
            int t=st.size();
            if(it=='N')
            {
                i=i+1;
                
            }
            else if(it=='E')
            {
                j=j+1;
               
            }
            else if(it=='S')
            {
                i=i-1;
               
            }
            else if(it=='W')
            {
                j=j-1;
               
            }
            if(st.find({i,j})!=st.end())
            return true;
            st.insert({i,j});

        }
        return false;
    }
};