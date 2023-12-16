class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arrs(26),arrt(26);
        for(auto it:s)
        arrs[it-'a']++;
        for(auto it:t)
        arrt[it-'a']++;
        return arrs==arrt;
        }
};