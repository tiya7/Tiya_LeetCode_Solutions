class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        
    }
};
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0)
            return 1;

        int ans = 10;
        int count = 9;
        int available = 9;

        for (int i = 2; i <= n; i++) {
            count = count * available;
            ans += count;
            available--;
        }

        return ans;
    }
};
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

10D 14:33:26

357. Count Numbers with Unique Digits
Medium
Topics
premium lock icon
Companies
Given an integer n, return the count of all numbers with unique digits, x, where 0 <= x < 10n.

 

Example 1:

Input: n = 2
Output: 91
Explanation: The answer should be the total numbers in the range of 0 ≤ x < 100, excluding 11,22,33,44,55,66,77,88,99
Example 2:

Input: n = 0
Output: 1
 

Constraints:

0 <= n <= 8
 
Accepted
203,716/360.1K
Acceptance Rate
56.6%
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
    int countNumbersWithUniqueDigits(int n) {
        
    }
};
Saved
Testcase
1
2
2
0
2/8 testcases
Line 1
Case 1: n
Copyright © 2026 LeetCode. All rights reserved.

1.8K


55
Search questions
