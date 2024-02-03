class Solution {
public:
    int countdigit(int low) {
        int cnt=0;
        while(low) {
            cnt++;
            low=low/10;
        }
        return cnt;
    }
    void generate(int dig,vector<int> &ans,int low,int high) {//naya ans sab aajayega
        for(int i=1;i<=(10-dig);i++) {
            int generatednumber=0;
            for(int j=i;j<i+dig;j++) {
                generatednumber=(generatednumber*10)+j;
            }
            if(generatednumber>=low&&generatednumber<=high)
            ans.push_back(generatednumber);
        }
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int n = countdigit(high);
        for(int i = countdigit(low);i <= n ; i++) {
            generate(i,ans,low,high);
        }
        return ans;
        //99 3000 2 4
        //12 23 234 345 456 567 678 789 1234 2345 3456 4567 5678 6789
        //123 234 345 456 567 678 789 1234 2345 
        // dig 2345%10
        // rev=rev*10+dig
        
    }
};