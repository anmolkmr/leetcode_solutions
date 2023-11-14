class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> left(26, -1);
        vector<int> right(26, -1);
        vector<set<char>> pms(26);
        for(int i = 0; i < s.length(); i++){
            int idx = s[i] - 'a';
            if(left[idx] == -1) left[idx] = i;
        }
        for(int i = s.length() - 1; i >= 0; i--){
            int idx = s[i] - 'a';
            if(right[idx] == -1) right[idx] = i;
        }
        for(int i=0; i < s.length(); i++)
        {
            for (int j = 0; j < 26; j++){
                if(left[j] < i && i < right[j]) pms[j].insert(s[i]);
            }
            
        }
        int count = 0;
        for(int i=0; i < 26; i++)
        {
            count += pms[i].size();
        }
        return count;
    }
};