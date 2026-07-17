class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;

        int m = board.size(), n = board[0].size();
        queue<pair<int,int>> q;

        auto add = [&](int i, int j) {
            if (i >= 0 && i < m && j >= 0 && j < n && board[i][j] == 'O') {
                board[i][j] = '#';
                q.push({i, j});
            }
        };

        for (int i = 0; i < m; i++) {
            add(i, 0);
            add(i, n - 1);
        }
        for (int j = 0; j < n; j++) {
            add(0, j);
            add(m - 1, j);
        }

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            for (int k = 0; k < 4; k++)
                add(x + dx[k], y + dy[k]);
        }

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                board[i][j] = (board[i][j] == '#') ? 'O' : 'X';
    }
};