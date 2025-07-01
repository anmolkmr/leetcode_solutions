class Solution {
public:
    int possibleStringCount(string word) {
        int ans=1;
        for(int i=0;i<word.length();i++){
            int j=i;
            while(j<=word.length()&&word[i]==word[j]){
                j++;
            }
            ans+=(j-i-1);
            i=j-1;
        }
        return ans;
    }
};