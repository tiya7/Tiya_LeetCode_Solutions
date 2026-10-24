class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
    }
};
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int count = 0;

                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        int r = i + x;
                        int c = j + y;

                        if (r >= 0 && r < m && c >= 0 && c < n)
                            count += board[r][c] & 1;
                    }
                }

                if (board[i][j] == 1 && (count == 3 || count == 4))
                    board[i][j] |= 2;

                if (board[i][j] == 0 && count == 3)
                    board[i][j] |= 2;
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] >>= 1;
            }
        }
    }
};