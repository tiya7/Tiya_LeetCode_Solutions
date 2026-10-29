

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
306. Additive Number
Medium
Topics
premium lock icon
Companies
An additive number is a string whose digits can form an additive sequence.

A valid additive sequence should contain at least three numbers. Except for the first two numbers, each subsequent number in the sequence must be the sum of the preceding two.

Given a string containing only digits, return true if it is an additive number or false otherwise.

Note: Numbers in the additive sequence cannot have leading zeros, so sequence 1, 2, 03 or 1, 02, 3 is invalid.

 

Example 1:

Input: "112358"
Output: true
Explanation: 
The digits can form an additive sequence: 1, 1, 2, 3, 5, 8. 
1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5, 3 + 5 = 8
Example 2:

Input: "199100199"
Output: true
Explanation: 
The additive sequence is: 1, 99, 100, 199. 
1 + 99 = 100, 99 + 100 = 199
 

Constraints:

1 <= num.length <= 35
num consists only of digits.
 

Follow up: How would you handle overflow for very large input integers?

 
Accepted
129,689/373.3K
Acceptance Rate
34.7%
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
    bool isAdditiveNumber(string num) {
        
    }
};
Saved
Testcase
1
2
"112358"
"199100199"
2/8 testcases
Line 1
Case 1: num
Copyright © 2026 LeetCode. All rights reserved.

1.3K


54
Search questions
