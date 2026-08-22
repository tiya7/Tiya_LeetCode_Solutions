class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;

        for (int h = 0; h < 12; h++) {
            for (int m = 0; m < 60; m++) {
                int count = 0, x = h, y = m;

                while (x > 0) {
                    count += x % 2;
                    x /= 2;
                }

                while (y > 0) {
                    count += y % 2;
                    y /= 2;
                }

                if (count == turnedOn) {
                    string time = to_string(h) + ":";
                    if (m < 10) time += "0";
                    time += to_string(m);
                    ans.push_back(time);
                }
            }
        }

        return ans;
    }
};