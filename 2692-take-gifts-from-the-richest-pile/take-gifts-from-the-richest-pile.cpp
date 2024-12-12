class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(auto it:gifts){
            pq.push(it);
        }
        while(k--){
            int temp=pq.top();
            pq.pop();
            pq.push(sqrt(temp));
        }
        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};