

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
194. Transpose File
Medium
Topics
premium lock icon
Companies
Given a text file file.txt, transpose its content.

You may assume that each row has the same number of columns, and each field is separated by the ' ' character.

Example:

If file.txt has the following content:

name age
alice 21
ryan 30
Output the following:

name alice ryan
age 21 30
 
Accepted
50,650/150.2K
Acceptance Rate
33.7%
Bash



1
2
# Read from the file file.txt and print its transposed content to stdout.

Saved
Testcase
数据为空
You don’t need to set testcases for Shell problems.

Copyright © 2026 LeetCode. All rights reserved.

167


21
Search questions
awk '
{
    for (i = 1; i <= NF; i++)
        a[i] = a[i] (a[i] ? " " : "") $i
}
END {
    for (i = 1; i <= NF; i++)
        print a[i]
}' file.txt