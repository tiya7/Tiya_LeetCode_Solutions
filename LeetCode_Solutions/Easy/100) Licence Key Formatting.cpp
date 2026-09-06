class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string temp = "";

        for (char c : s) {
            if (c != '-') {
                temp += toupper(c);
            }
        }

        string ans = "";
        int count = 0;

        for (int i = temp.size() - 1; i >= 0; i--) {
            if (count == k) {
                ans += '-';
                count = 0;
            }

            ans += temp[i];
            count++;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
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