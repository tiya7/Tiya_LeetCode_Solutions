class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream a(version1);
        stringstream b(version2);

        string x, y;

        while (getline(a, x, '.') || getline(b, y, '.')) {
            int n1 = x.empty() ? 0 : stoi(x);
            int n2 = y.empty() ? 0 : stoi(y);

            if (n1 < n2)
                return -1;

            if (n1 > n2)
                return 1;

            x = "";
            y = "";
        }

        return 0;
    }
};