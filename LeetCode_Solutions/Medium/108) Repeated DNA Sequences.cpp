class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
    }
};
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int> mp;
        vector<string> ans;

        for (int i = 0; i + 10 <= s.size(); i++) {
            string x = s.substr(i, 10);
            mp[x]++;
        }

        for (auto x : mp) {
            if (x.second > 1)
                ans.push_back(x.first);
        }

        return ans;
    }
};