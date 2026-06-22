class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mp;
        for(auto it:text)
        mp[it]++;

        int mn=min(mp['b'],min(mp['a'],mp['n']));
        int mn2=min(mp['l'],mp['o'])/2;
        return min(mn,mn2);



    }
};