class MyCalendar {
public:
    vector<pair<int,int>> v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        if(v.size()==0)
        v.push_back({start,end-1});
        else{
            for(auto it:v)
            {
                if(it.first<=start&&start<=it.second)
                return false;
                if(it.first<=end-1&&end-1<=it.second)
                return false;
                if(start<it.first&&it.second<end-1)
                return false;
            }
        }
        v.push_back({start,end-1});
        cout<<start<<" "<<end-1<<endl;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */