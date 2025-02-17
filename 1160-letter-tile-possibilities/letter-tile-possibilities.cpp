class Solution {
public:
    void solve(int ind,set<string> &ans,string &temp,string &tiles,vector<int> &cnt){
        if(temp.size()>0){
            ans.insert(temp);
        }
        if(ind>=tiles.size()){
            ans.insert(temp);
            return ;
        }
        for(int i=0;i<26;i++){
            if(cnt[i]>0){
                temp+=char('a'+i);
                cnt[i]--;
                solve(ind+1,ans,temp,tiles,cnt);
                cnt[i]++;
                temp.pop_back();
            }
        }

    }
    int numTilePossibilities(string tiles) {
        vector<int> count(26,0);
        for(auto it:tiles){
            count[it-'A']++;
        }
        set<string> ans;
        string temp;
       solve(0,ans,temp,tiles,count);

       for(auto it:ans)
       cout<<it<<endl;
        return ans.size();
    }
};