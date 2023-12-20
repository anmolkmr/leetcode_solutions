class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int i=0,j=prices.size()-1;
        int mn=INT_MIN;
        while(i<j)
        {
            if(money-(prices[i]+prices[j])<0)
            j--;
            else if(money-(prices[i]+prices[j])>=0)
            {
                mn=max(mn,money-(prices[i]+prices[j]));
                j--;
            }
        }
        if(mn==INT_MIN)return money;
        return mn;
        
    }
};