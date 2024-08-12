class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int ind;
    vector<int> temp;
    KthLargest(int k, vector<int>& nums) {
        for(auto it:nums){
           if(pq.size()<=k){
            pq.push(it);
           }
           else{
            pq.push(it);
            while(pq.size()>k){
                pq.pop();
            }
           }
        }
        ind=k;
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size()>ind){
            pq.pop();

        }
        return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */