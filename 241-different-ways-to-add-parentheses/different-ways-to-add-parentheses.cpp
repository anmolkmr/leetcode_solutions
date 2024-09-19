class Solution {
public:
    vector<int> solve(string s){
            vector<int> res;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+'||s[i]=='*'||s[i]=='-'){
                vector<int> lr=solve(s.substr(0,i));
                vector<int> rr=solve(s.substr(i+1));

                for(auto it:lr){
                    for(auto it1:rr){
                        if(s[i]=='+')
                        res.push_back(it+it1);
                        else if(s[i]=='-')
                        res.push_back(it-it1);
                        else if(s[i]=='*')
                        res.push_back(it*it1);
                    }
                }
            }
        }
        if(res.empty()){
            res.push_back(stoi(s));
            
        }
        return res;
    }
    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};