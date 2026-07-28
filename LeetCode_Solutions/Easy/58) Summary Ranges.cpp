LeetCode Logo
Problem List
Debugging...
Debugging...









0
0Streaks
Ready to Practice?
DCC Badge

avatar
Avatar
TiyaGandhi
Access all features with our Premium subscription!
myLists
My Lists
notebook
Notebook
progress
Progress
points
Points
Try New Features
Orders
My Playgrounds
Settings
Appearance
Sign Out
Premium
Description
Editorial
Editorial
Solutions
Solutions
Submissions
Submissions


Code
Testcase
Testcase
Test Result
228. Summary Ranges
Easy
Topics
premium lock icon
Companies
You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b
 

Example 1:

Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"
Example 2:

Input: nums = [0,2,3,4,6,8,9]
Output: ["0","2->4","6","8->9"]
Explanation: The ranges are:
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"
 

Constraints:

0 <= nums.length <= 20
-231 <= nums[i] <= 231 - 1
All the values of nums are unique.
nums is sorted in ascending order.
 
Seen this question in a real interview before?
1/6
Yes
No
Accepted
981,214/1.8M
Acceptance Rate
54.5%
Topics
icon
Companies
Similar Questions
Discussion (171)

Choose a type



Copyright © 2026 LeetCode. All rights reserved.

4.6K


171

43 Online
C++
Auto





class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
    }
};
123456
Saved
You must run your code first
Search questions



