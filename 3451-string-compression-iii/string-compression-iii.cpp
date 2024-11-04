class Solution {
public:
    string compressedString(string word) {
        string comp="";
        for(int i=0;i<word.length();i++){
            int cnt=1;
            while(word[i]==word[i+1] ){
                cnt++;
                if(cnt==9){
                    comp+=to_string(cnt);
            comp+=word[i];
            cnt=0;
                }
                i++;

            }
            if(cnt){
            comp+=to_string(cnt);
            comp+=word[i];}
        }
        return comp;
    }
};