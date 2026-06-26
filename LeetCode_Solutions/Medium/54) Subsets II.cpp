class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        sort(nums.begin(), nums.end());

        function<void(int)> solve = [&](int i){
            ans.push_back(temp);

            for(int j = i; j < nums.size(); j++){
                if(j > i && nums[j] == nums[j-1])
                    continue;

                temp.push_back(nums[j]);
                solve(j + 1);
                temp.pop_back();
            }
        };

        solve(0);

        return ans;
    }
};