class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> st;
        int maxd = 0;

        // Insert obstacles into the set with appropriate key format
        for (auto& it : obstacles) {
            st.insert(to_string(it[0]) + '_' + to_string(it[1]));
        }

        pair<int, int> co = {0, 0}; // Start at origin
        char dir = 'n'; // Initial direction is 'north'

        for (auto it : commands) {
            if (it > 0) { // Move forward
                for (int i = 0; i < it; i++) {
                    int newx = co.first;
                    int newy = co.second;

                    // Move according to the current direction
                    if (dir == 'n') {
                        newy++;
                    } else if (dir == 'e') {
                        newx++;
                    } else if (dir == 's') {
                        newy--;
                    } else if (dir == 'w') {
                        newx--;
                    }

                    // Check if the next position is an obstacle
                    string nkey = to_string(newx) + '_' + to_string(newy);
                    if (st.find(nkey) != st.end()) {
                        break; // Stop moving in the current direction if there's an obstacle
                    }

                    // Update the robot's position
                    co.first = newx;
                    co.second = newy;

                    // Update the maximum distance squared
                    maxd = max(maxd, co.first * co.first + co.second * co.second);
                }
            } else { // Change direction
                if (dir == 'n' && it == -1) {
                    dir = 'e';
                } else if (dir == 'n' && it == -2) {
                    dir = 'w';
                } else if (dir == 'e' && it == -1) {
                    dir = 's';
                } else if (dir == 'e' && it == -2) {
                    dir = 'n';
                } else if (dir == 's' && it == -1) {
                    dir = 'w';
                } else if (dir == 's' && it == -2) {
                    dir = 'e';
                } else if (dir == 'w' && it == -1) {
                    dir = 'n';
                } else if (dir == 'w' && it == -2) {
                    dir = 's';
                }
            }
        }

        return maxd;
    }
};
