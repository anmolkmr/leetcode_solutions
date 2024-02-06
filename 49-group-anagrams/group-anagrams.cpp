class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>> temp;
        vector<vector<string>> ans;
        for(auto it:strs){
            string s=it;
           sort(it.begin(),it.end());
           temp.push_back({it,s});
          
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            vector<string> t1;
            int j=i;
            while(j<temp.size()&&temp[i].first==temp[j].first){
            
                t1.push_back(temp[j].second);
                j++;
            }
            ans.push_back(t1);
            i=j;
            i--;
        }
        return ans;
    }
};