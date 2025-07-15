class Solution {
public:
    bool isValid(string word) {
        bool isVowel=false,isConsonant=false,isNumber=false;
        for(auto it:word){
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'||it=='A'||it=='E'||it=='I'||it=='O'||it=='U')
            isVowel=true;
            else if(it>='a'&&it<='z'||it>='A'&&it<='Z'){
            if(it!='a'||it!='e'||it!='i'||it!='o'||it!='u'||it!='A'||it!='E'||it!='I'||it!='O'||it!='U')
            isConsonant=true;
            }
            else if(it>='0'&&it<='9'){
                isNumber=true;
            }
            else return false;

        }
        return isVowel&&isConsonant&&(word.length()>=3);
    }
};