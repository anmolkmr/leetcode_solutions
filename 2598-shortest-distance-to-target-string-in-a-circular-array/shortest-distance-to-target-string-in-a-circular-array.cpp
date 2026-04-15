class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int w=words.size();
       vector<int> ind;
       for(int i=0;i<words.size();i++){
        if(target==words[i]){
            ind.push_back(i);
        }
       }
        int mini = INT_MAX;
       for(auto it:ind){
        if(it<=startIndex){
            cout<<it<<" "<<startIndex<<endl;
            mini=min(mini,startIndex-it);
            mini=min(w-startIndex+it,mini);
        }else{
            mini=min(mini,it-startIndex);
            mini=min(w-it+startIndex,mini);
        }
       }
       return mini==INT_MAX?-1:mini;
    }
};