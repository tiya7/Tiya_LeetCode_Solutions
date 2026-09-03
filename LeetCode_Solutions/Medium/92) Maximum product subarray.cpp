class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum = nums[0];
        int minimum = nums[0];
        int answer = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0)
                swap(maximum, minimum);

            maximum = max(nums[i], maximum * nums[i]);
            minimum = min(nums[i], minimum * nums[i]);

            answer = max(answer, maximum);
        }

        return answer;
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            int product = 1;

            for (int j = i; j < nums.size(); j++) {
                product = product * nums[j];
                ans = max(ans, product);
            }
        }

        return ans;
    }
};