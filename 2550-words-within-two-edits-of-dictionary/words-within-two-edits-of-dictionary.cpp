class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> res;
      for(int i=0;i<queries.size();i++){
        for(int j=0;j<dictionary.size();j++){
            int cnt=0;
            if(queries[i].length()==dictionary[j].length()){
                for(int k=0;k<queries[i].length();k++){
                    if(queries[i][k]!=dictionary[j][k]){
                        cnt++;
                    }
                    if(cnt>2)break;
                }
                if(cnt<=2){
                    res.push_back(queries[i]);
                    break;
                }
            }

        }
      }
      return res;

    }
};