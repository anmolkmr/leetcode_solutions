class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt=0,ans=0;
        for(auto it:gain){
            alt+=it;
            ans=max(ans,alt);
    
        }
        return ans;
    }
};