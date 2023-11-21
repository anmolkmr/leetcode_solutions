class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),mx=prices[n-1];
        vector<int> temp(n);
        for(int i=n-1;i>=0;i--)
        {
            mx=max(mx,prices[i]);
            prices[i]=mx-prices[i];
        }
        return *max_element(prices.begin(),prices.end());
    }
};