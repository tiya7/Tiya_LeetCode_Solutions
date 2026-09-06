class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string str = "";

        for (char c : s) {
            if (c != '-')
                str += toupper(c);
        }

        string ans = "";
        int first = str.size() % k;

        if (first != 0) {
            ans += str.substr(0, first);
            if (first < str.size())
                ans += "-";
        }

        for (int i = first; i < str.size(); i += k) {
            ans += str.substr(i, k);

            if (i + k < str.size())
                ans += "-";
        }

        return ans;
    }
};