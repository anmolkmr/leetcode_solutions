class MyQueue {
public:
    stack<int> st,temp;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        int ele=temp.top();
        temp.pop();
         while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        return ele;
    }
    
    int peek() {
                while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        int ele=temp.top();
         while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        return ele;
    }
    
    bool empty() {
        return st.empty();
    }
};
//
//32
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */