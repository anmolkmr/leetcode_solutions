class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int coin=0;
        sort(piles.begin(),piles.end());
        int cnt=piles.size()/3;
        for(int i=piles.size()-2;i>=0;i=i-2)
        {
            coin+=piles[i];
            cnt--;
            if(cnt==0)return coin;
        }
        return coin;
    }
};