class Solution {
public:
    int countDigits(int num){
        int k=0;
        while(num){
            num=num/10;
            k++;
        }
        return k;
    }
    vector<int> sequentialDigits(int low, int high) {
        int lowDigit=countDigits(low),highDigit=countDigits(high);
        set<int> ans;
        int diff=highDigit-lowDigit;
        for(int x=0;x<=diff;x++){
            for(int y=1;y<=9;y++){
                int dig=0;
                string s=to_string(y);
                char c=s[0];
                string l="";
                for(int z=0;z<lowDigit+x;z++){
                    l=l+char(c+z);
                }
                if(low<=stoi(l)&&stoi(l)<=high)
                ans.insert(stoi(l));
            }
        }
        vector<int> ans2;
        for(auto it:ans)
        ans2.push_back(it);
        return ans2;
    }
};