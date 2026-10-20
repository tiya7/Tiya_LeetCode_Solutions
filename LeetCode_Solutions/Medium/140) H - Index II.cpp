

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
275. H-Index II
Medium
Topics
premium lock icon
Companies
Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper and citations is sorted in non-descending order, return the researcher's h-index.

According to the definition of h-index on Wikipedia: The h-index is defined as the maximum value of h such that the given researcher has published at least h papers that have each been cited at least h times.

You must write an algorithm that runs in logarithmic time.

 

Example 1:

Input: citations = [0,1,3,5,6]
Output: 3
Explanation: [0,1,3,5,6] means the researcher has 5 papers in total and each of them had received 0, 1, 3, 5, 6 citations respectively.
Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.
Example 2:

Input: citations = [1,2,100]
Output: 2
 

Constraints:

n == citations.length
1 <= n <= 105
0 <= citations[i] <= 1000
citations is sorted in ascending order.
 
Accepted
287,243/713.9K
Acceptance Rate
40.2%
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
    int hIndex(vector<int>& citations) {
        
    }
};
Saved
Testcase
1
2
[0,1,3,5,6]
[1,2,100]
2/8 testcases
Line 1
Case 1: citations
Copyright © 2026 LeetCode. All rights reserved.

574


58
Search questions
