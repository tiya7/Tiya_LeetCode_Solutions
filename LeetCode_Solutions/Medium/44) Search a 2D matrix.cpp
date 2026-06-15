class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }

        int m = matrix.size();
        int n = matrix[0].size();
        
        // Define the bounds for the "flattened" 1D array
        int left = 0;
        int right = m * n - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Map the 1D index back to 2D matrix coordinates
            int row = mid / n;
            int col = mid % n;
            int mid_val = matrix[row][col];
            
            if (mid_val == target) {
                return true;
            } else if (mid_val < target) {
                left = mid + 1; // Search the right half
            } else {
                right = mid - 1; // Search the left half
            }
        }
        
        return false;
    }
};