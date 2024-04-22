class MyStack {
public:
queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int temp= q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return temp;
        
    }
    
    int top() {
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int temp= q1.front();
        q2.push(q1.front());
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return temp;  
    }
    
    bool empty() {
        cout<<q1.size();
        return q1.empty();
        
    }
};

/**
//21
//1
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();

 3
 12
 */
 