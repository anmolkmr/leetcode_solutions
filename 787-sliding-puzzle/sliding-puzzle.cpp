class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string start="",target="123450";
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                start+=to_string(board[i][j]);
            }
        }
        map<int,vector<int>> mp;
        mp[0]={1,3};
        mp[1]={0,2,4};
        mp[2]={1,5};
        mp[3]={0,4};
        mp[4]={1,3,5};
        mp[5]={2,4};

        queue<string> q;
        q.push(start);

        unordered_set<string> vis;
        vis.insert(start);
        int level=0;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                string curr=q.front();
                q.pop();
                if(curr==target)
                return level;

                int indexOfZero=curr.find('0');
                for(auto it:mp[indexOfZero]){
                    string newState=curr;
                    swap(newState[it],newState[indexOfZero]);
                    if(vis.find(newState)==vis.end()){
                        q.push(newState);
                        vis.insert(newState);
                    }
                }
            }
            level++;
        }
        return -1;
        
    }
};