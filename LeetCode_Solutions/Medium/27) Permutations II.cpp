class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp,
               vector<vector<int>>& ans, vector<int>& used) {

        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (used[i]) continue;

            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
                continue;
            }

            used[i] = 1;
            temp.push_back(nums[i]);

            solve(nums, temp, ans, used);

            temp.pop_back();
            used[i] = 0;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> used(nums.size(), 0);

        sort(nums.begin(), nums.end());

        solve(nums, temp, ans, used);

        return ans;
    }
};