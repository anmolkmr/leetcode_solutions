class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> str;
        for(int i=0;i<sentence.length();i++){
            string temp="";
            while(i<sentence.length()&&sentence[i]!=' ')
            {
                temp+=sentence[i];
                i++;
            }
            str.push_back(temp);
            temp.clear();
        }
        int idx=0;
        for(auto it:str)
        {
            if(it.length()<searchWord.length())
            {idx++;continue;}
            string tt="";
            for(int j=0;j<searchWord.length();j++){
                tt+=it[j];
            }
            if(tt==searchWord)
            return idx+1;
            idx++;
        }
        return -1;
    }
};