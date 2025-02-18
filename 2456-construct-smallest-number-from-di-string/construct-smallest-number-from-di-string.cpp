class Solution {
public:
    bool solve(int ind,string pattern,string &num,vector<bool> &used){
        if(ind>=pattern.length())
        return true;
        string k="";
            k+=num[num.length()-1];
            int temp=stoi(k);
        if(pattern[ind]=='I'){
            for(int i=0;i<used.size();i++){
                if(!used[i]&&i>temp){
                    num+=to_string(i);
                    used[i]=true;
                    if(solve(ind+1,pattern,num,used)){
                        return true;
                    }
                    num.pop_back();
                    used[i]=false;
                }
            }
        }
        if(pattern[ind]=='D'){
            for(int i=0;i<used.size();i++){
                if(!used[i]&&i<temp){
                    num+=to_string(i);
                    used[i]=true;
                    if(solve(ind+1,pattern,num,used)){
                        return true;
                    }
                    used[i]=false;
                    num.pop_back();
                }
            }
        }
        return false;
    }
    string smallestNumber(string pattern) {
        vector<bool> used(10,false);
        used[0]=true;
        string num="";
        for(int i=1;i<10;i++){
            used[i]=true;
            num=to_string(i);
            if(solve(0,pattern,num,used))
            return num;
            used[i]=false;
        }
        return num;
    }
};