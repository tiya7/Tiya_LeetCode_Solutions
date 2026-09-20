

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
192. Word Frequency
Medium
Topics
premium lock icon
Companies
Write a bash script to calculate the frequency of each word in a text file words.txt.

For simplicity sake, you may assume:

words.txt contains only lowercase characters and space ' ' characters.
Each word must consist of lowercase characters only.
Words are separated by one or more whitespace characters.
Example:

Assume that words.txt has the following content:

the day is sunny the the
the sunny is is
Your script should output the following, sorted by descending frequency:

the 4
is 3
sunny 2
day 1
Note:

Don't worry about handling ties, it is guaranteed that each word's frequency count is unique.
Could you write it in one-line using Unix pipes?
 
Accepted
87,430/290.7K
Acceptance Rate
30.1%
Bash



1
2
# Read from the file words.txt and output the word frequency list to stdout.

Saved
Testcase
数据为空
You don’t need to set testcases for Shell problems.

Copyright © 2026 LeetCode. All rights reserved.

587


27
Search questions


Frequency
The frequency of a word x is the number of times it occurs in the text file.