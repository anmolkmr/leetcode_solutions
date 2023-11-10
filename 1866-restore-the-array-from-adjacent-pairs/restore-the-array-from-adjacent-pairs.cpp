class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adj) {
        map<int,vector<int>> mp;
        for(auto it:adj)
        {
                if(mp.find(it[0])==mp.end())
                {
                    vector<int> l;
                    l.push_back(it[1]);
                    mp[it[0]]=l;
                }
                else if(mp.find(it[0])!=mp.end())
                {
                    vector<int> temp=mp[it[0]];
                    temp.push_back(it[1]);
                    mp[it[0]]=temp;
                }
                if(mp.find(it[1])==mp.end())
                {
                    vector<int> l;
                    l.push_back(it[0]);
                    mp[it[1]]=l;
                }
                else if(mp.find(it[1])!=mp.end())
                {
                    vector<int> temp=mp[it[1]];
                    temp.push_back(it[0]);
                    mp[it[1]]=temp;
                }
        }
        vector<int> org;
        int reqs=adj.size()+1;
        for(auto it:mp)
        {
            if(it.second.size()==1)
            {
                org.push_back(it.first);
                org.push_back(it.second[0]);
                auto temp=mp[it.second[0]];
                while(org.size()<reqs)
                {     
                    if(temp[0]!=org[org.size()-2])
                    {
                        org.push_back(temp[0]);
                        temp=mp[temp[0]];
                    } 
                    else if(temp.size()>1){
                        org.push_back(temp[1]);
                        temp=mp[temp[1]];
                    }
                }
                return org;
            }
        }
    

        return org;
    }
};


    // for(auto it:mp)
        // {
        //     cout<<it.first<<"  ";
        //     for(auto it1:it.second)
        //     {
        //         cout<<it1<<" ";
        //     }
        //     cout<<endl;
        // }
        