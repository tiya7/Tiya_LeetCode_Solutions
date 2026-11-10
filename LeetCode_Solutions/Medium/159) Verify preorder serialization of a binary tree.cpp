
class Solution {
public:
    bool isValidSerialization(string preorder) {
        
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
331. Verify Preorder Serialization of a Binary Tree
Medium
Topics
premium lock icon
Companies
One way to serialize a binary tree is to use preorder traversal. When we encounter a non-null node, we record the node's value. If it is a null node, we record using a sentinel value such as '#'.


For example, the above binary tree can be serialized to the string "9,3,4,#,#,1,#,#,2,#,6,#,#", where '#' represents a null node.

Given a string of comma-separated values preorder, return true if it is a correct preorder traversal serialization of a binary tree.

It is guaranteed that each comma-separated value in the string must be either an integer or a character '#' representing null pointer.

You may assume that the input format is always valid.

For example, it could never contain two consecutive commas, such as "1,,3".
Note: You are not allowed to reconstruct the tree.

 

Example 1:

Input: preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#"
Output: true
Example 2:

Input: preorder = "1,#"
Output: false
Example 3:

Input: preorder = "9,#,#,1"
Output: false
 

Constraints:

1 <= preorder.length <= 104
preorder consist of integers in the range [0, 100] and '#' separated by commas ','.
 
Accepted
177,898/369.6K
Acceptance Rate
48.1%
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
    bool isValidSerialization(string preorder) {
        
    }
};
Saved
Testcase
1
2
3
"9,3,4,#,#,1,#,#,2,#,6,#,#"
"1,#"
"9,#,#,1"
3/8 testcases
Line 1
Case 1: preorder
Copyright © 2026 LeetCode. All rights reserved.

2.5K


21
Search questions
