class Solution {
public:
    vector<string> ans;

    void solve(string s, int idx, int parts, string cur) {
        if(parts == 4) {
            if(idx == s.size()) {
                ans.push_back(cur.substr(0, cur.size()-1));
            }
            return;
        }

        for(int i = idx; i < s.size() && i < idx + 3; i++) {
            string part = s.substr(idx, i - idx + 1);
            if(part.size() > 1 && part[0] == '0') continue;
            if(stoi(part) > 255) continue;

            solve(s, i + 1, parts + 1, cur + part + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        solve(s, 0, 0, "");
        return ans;
    }
};