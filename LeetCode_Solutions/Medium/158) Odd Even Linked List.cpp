

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
328. Odd Even Linked List
Medium
Topics
premium lock icon
Companies
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]
Example 2:


Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]
 

Constraints:

The number of nodes in the linked list is in the range [0, 104].
-106 <= Node.val <= 106
 
Accepted
1,662,097/2.6M
Acceptance Rate
62.9%
C++




1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
⌄
⌄
⌄
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
    }
};
Saved
Testcase
1
2
[1,2,3,4,5]
[2,1,3,5,6,4,7]
2/8 testcases
Line 1
Case 1: head
Copyright © 2026 LeetCode. All rights reserved.

11.8K


268
Search questions
