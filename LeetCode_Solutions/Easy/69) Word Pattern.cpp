

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
290. Word Pattern
Easy
Topics
premium lock icon
Companies
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:

Each letter in pattern maps to exactly one unique word in s.
Each unique word in s maps to exactly one letter in pattern.
No two letters map to the same word, and no two words map to the same letter.
 

Example 1:

Input: pattern = "abba", s = "dog cat cat dog"

Output: true

Explanation:

The bijection can be established as:

'a' maps to "dog".
'b' maps to "cat".
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"

Output: false

Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"

Output: false

 

Constraints:

1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lowercase English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space.
 
Accepted
1,163,036/2.6M
Acceptance Rate
44.5%
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
    bool wordPattern(string pattern, string s) {
        
    }
};
Saved
Testcase
1
2
3
4
5
6
"abba"
"dog cat cat dog"
"abba"
"dog cat cat fish"
"aaaa"
"dog cat cat dog"
3/8 testcases
Line 1
Case 1: pattern
Copyright © 2026 LeetCode. All rights reserved.

8.1K


359
Search questions


