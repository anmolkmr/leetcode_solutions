class Solution {
public:
    bool ispalin(string s){
        int i=0,j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            if(ispalin(it)){
                return it;
            }
        }
        return "";
        
    }
};