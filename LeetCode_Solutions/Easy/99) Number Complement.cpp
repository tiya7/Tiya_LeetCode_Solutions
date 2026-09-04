

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
476. Number Complement
Easy
Topics
premium lock icon
Companies
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer num, return its complement.

 

Example 1:

Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
Example 2:

Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
 

Constraints:

1 <= num < 231
 

Note: This question is the same as 1009: https://leetcode.com/problems/complement-of-base-10-integer/

 
Accepted
570,521/808.6K
Acceptance Rate
70.6%
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
    int findComplement(int num) {
        
    }
};
Saved
Testcase
1
2
5
1
2/8 testcases
Line 1
Case 1: num
Copyright © 2026 LeetCode. All rights reserved.

3.3K


98
Search questions


class Solution {
public:
    int findComplement(int num) {
        
    }
};
class Solution {
public:
    int findComplement(int num) {
        int mask = 0;
        int temp = num;

        while (temp > 0) {
            mask = mask * 2 + 1;
            temp = temp / 2;
        }

        return num ^ mask;
    }
};