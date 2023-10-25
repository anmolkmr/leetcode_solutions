class Solution {
    public int maxProfit(int[] prices) {
        int mx=0,m=Integer.MAX_VALUE;
        for(int i=0;i<prices.length;i++)
        {
            if(m>prices[i])
            m=prices[i];
            if(prices[i]-m>mx)
            mx=prices[i]-m;
            
        }
        return mx;
    }
}