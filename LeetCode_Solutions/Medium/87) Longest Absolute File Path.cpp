class Solution {
public:
    int lengthLongestPath(string input) {
        vector<int> len(10001);
        int ans = 0, i = 0;

        while (i < input.size()) {
            int level = 0;

            while (i < input.size() && input[i] == '\t') {
                level++;
                i++;
            }

            int start = i;

            while (i < input.size() && input[i] != '\n')
                i++;

            string name = input.substr(start, i - start);

            if (name.find('.') != string::npos)
                ans = max(ans, len[level] + (int)name.size());
            else
                len[level + 1] = len[level] + name.size() + 1;

            i++;
        }

        return ans;
    }
};