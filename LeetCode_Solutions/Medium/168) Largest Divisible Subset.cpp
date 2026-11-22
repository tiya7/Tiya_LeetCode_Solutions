

Avatar
TiyaGandhi
Access all features with our Premium subscription!
myLists
My Lists
favorites
Favorites
notebook
Notebook
progress
Progress
points
Points
Problems
Discuss
Contest
Interview
Store
Try New Features
Orders
My Playgrounds
Settings
Appearance
Sign Out
368. Largest Divisible Subset
Medium
Topics
premium lock icon
Companies
Given a set of distinct positive integers nums, return the largest subset answer such that every pair (answer[i], answer[j]) of elements in this subset satisfies:

answer[i] % answer[j] == 0, or
answer[j] % answer[i] == 0
If there are multiple solutions, return any of them.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,2]
Explanation: [1,3] is also accepted.
Example 2:

Input: nums = [1,2,4,8]
Output: [1,2,4,8]
 

Constraints:

1 <= nums.length <= 1000
1 <= nums[i] <= 2 * 109
All the integers in nums are unique.
 
Accepted
546,114/1.1M
Acceptance Rate
50.3%
C++




1
2
3
4
5
6
⌄
⌄
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
    }
};
Saved
Testcase
1
2
[1,2,3]
[1,2,4,8]
2/8 testcases
Line 1
Case 1: nums
Copyright © 2026 LeetCode. All rights reserved.

7K


294
Search questions
