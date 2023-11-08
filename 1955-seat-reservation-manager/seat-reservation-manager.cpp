class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>> seat;
    int count=1;
    SeatManager(int n) {

    }
    
    int reserve() {
        if(seat.size()==0)
        {
            return count++;
        }
        int avail=seat.top();
        seat.pop();
        return avail;
    }
    
    void unreserve(int seatNumber) {
        seat.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */