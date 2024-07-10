class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt=0;
        for(auto it:logs){
            if(it=="../"){
                cnt--;
                if(cnt<0)cnt=0;
            }
            else if(it=="./"){
                
            }
            else{
                cnt++;
            }
        }
        return max(0,cnt);
    }
};