class Solution {
public:
    int BFS(int start,vector<bool>& vis,map<int,vector<int>> &adj){
        queue<pair<int,int>> q;
        q.push({start,0});
        int maxDistance=0;
        while(!q.empty()){
            pair<int,int> temp=q.front();
            q.pop();
            for(auto it:adj[temp.first]){
                if(!vis[it]){
                vis[it]=true;
                q.push({it,temp.second+1});
                maxDistance=max(maxDistance,temp.second+1);
                }
            }
        }
        return maxDistance;
    }
    int maximumInvitations(vector<int>& favorite) {
        int n=favorite.size();
        map<int,vector<int>> adj;
        for(int i=0;i<n;i++){
            adj[favorite[i]].push_back(i);
        }

        int longestCycleEmployeeCnt=0;
        int happyCoupleEmployeeCount=0;

        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                unordered_map<int,int> mp;
                int currNode=i;
                int currNodeCnt=0;
                while(!visited[currNode]){
                    visited[currNode]=true;
                    mp[currNode]=currNodeCnt;
                    currNodeCnt++;
                    int nextNode=favorite[currNode];
                    if(mp.count(nextNode)){
                        int cycleLength=currNodeCnt-mp[nextNode];
                        longestCycleEmployeeCnt=max(longestCycleEmployeeCnt,cycleLength);

                        if(cycleLength==2){
                            vector<bool> tempVis(n,false);
                            tempVis[currNode]=true;
                            tempVis[nextNode]=true;
                            happyCoupleEmployeeCount+=2+BFS(currNode,tempVis,adj)+BFS(nextNode,tempVis,adj);
                        }
                        break;

                    }
                    currNode=nextNode;
                }
            }
        }

        return max(happyCoupleEmployeeCount,longestCycleEmployeeCnt);

    }
};