class Solution {
public:
    string convert(string s, int numRows) {
        // Edge case: If only 1 row or string is too short, no zigzag happens
        if (numRows == 1 || s.length() <= numRows) {
            return s;
        }

        // Create a vector of strings to store characters for each row
        vector<string> rows(min(numRows, (int)s.length()));
        int currentRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currentRow] += c;
            
            // If we are at the top or bottom row, reverse direction
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }
            
            // Move up or down
            currentRow += goingDown ? 1 : -1;
        }

        // Combine all rows into a single string
        string result = "";
        for (const string& row : rows) {
            result += row;
        }

        return result;
    }
};