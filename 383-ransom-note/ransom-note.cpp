class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp1,mp2;
        for(auto it: ransomNote)
            mp1[it]++;
        for(auto it: magazine)
            mp2[it]++;
        for(auto it: mp1){
            char c = it.first;
            int freq = it.second;
            if(mp2[c] < freq)
                return false;
        }
        return true;
    }
};