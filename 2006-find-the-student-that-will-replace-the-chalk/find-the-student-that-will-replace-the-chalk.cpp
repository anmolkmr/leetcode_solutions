class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        for(auto it:chalk)
        sum += it;
        long long times = k/sum;
        long long remainingChalk = k%sum;
        cout<<times<<remainingChalk<<endl;
        for(long long i=0;i<chalk.size();i++){
            if((remainingChalk-chalk[i])<0)
            return i;
            remainingChalk-=chalk[i];
        }
        return 0;
    }
};