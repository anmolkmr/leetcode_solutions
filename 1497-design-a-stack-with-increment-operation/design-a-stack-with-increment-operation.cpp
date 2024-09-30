class CustomStack {
public:
    vector<int> st;
    int K;
    int idx;
    CustomStack(int maxSize) {
        K=maxSize;
        idx=-1;
        st=vector<int>(maxSize);
    }
    
    void push(int x) {
        if(idx+1>=K)return;
        idx++;
        st[idx]=x;
        
        
    }
    
    int pop() {
        if(idx==-1)return -1;
        int ans=st[idx];
        idx--;
        return ans;

    }
    
    void increment(int k, int val) {
        if(k<K){
        // if(idx<k)
        // {
        //     for(int i=0;i<idx;i++){
        //         st[i]+=val;
        //     }
        // }
        // else 
        //if(idx>k){
            for(int i=0;i<k;i++){
                st[i]+=val;
            //}
        }}else{
            for(int i=0;i<st.size();i++){
                st[i]+=val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */