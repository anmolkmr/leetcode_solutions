class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> rec;
        int cnt=0;
        for(auto it:words){
            if(it[0]=='a'||it[0]=='u'||it[0]=='o'||it[0]=='i'||it[0]=='e')
            if(it[it.length()-1]=='a'||it[it.length()-1]=='u'||it[it.length()-1]=='o'||it[it.length()-1]=='i'||it[it.length()-1]=='e'){
                cnt++;
                
            }
            rec.push_back(cnt);
        }
        vector<int> ans;
        for(auto it:rec)
        cout<<it<<endl;
        for(auto it:queries){
            int k=rec[it[1]]-rec[it[0]];
            if(words[it[0]][0]=='a'||words[it[0]][0]=='u'||words[it[0]][0]=='o'||words[it[0]][0]=='i'||words[it[0]][0]=='e'){
                int last = words[it[0]].length()-1;
                if(words[it[0]][last]=='a'||words[it[0]][last]=='u'||words[it[0]][last]=='o'||words[it[0]][last]=='i'||words[it[0]][last]=='e')
                k++;
            }
            ans.push_back(k);
        }
        return ans;
        
    }
};