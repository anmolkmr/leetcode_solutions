class Solution {    
public:   
    bool met(vector<int>& alpha,int k)
    {
        int sum=0;
        for(auto it:alpha)
        sum+=it;
        int m=*max_element(alpha.begin(),alpha.end());
        if(k>=sum-m)
        return true;
        return false;
    }
    int characterReplacement(string s, int k) {
        int i=0,j=0,maxi=INT_MIN;
        vector<int> alpha(26);
        while(j<s.length())
        {
            alpha[s[j]-'A']++;
            if(met(alpha,k))
            {
                maxi=max(maxi,j-i+1);       
                j++;
            }
            if(!met(alpha,k))
            {
                alpha[s[i]-'A']--;
                i++;
                j++;
            }
        }
        return maxi;
    }
};