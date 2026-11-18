class Twitter {
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        
    }
    
    vector<int> getNewsFeed(int userId) {
        
    }
    
    void follow(int followerId, int followeeId) {
        
    }
    
    void unfollow(int followerId, int followeeId) {
        
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
class Twitter {
    int time;
    unordered_map<int, vector<pair<int, int>>> tweets;
    unordered_map<int, unordered_set<int>> following;

public:
    Twitter() {
        time = 0;
    }

    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>> pq;

        following[userId].insert(userId);

        for (int user : following[userId]) {
            if (!tweets[user].empty()) {
                auto t = tweets[user].back();
                pq.push(t);
            }
        }

        vector<int> ans;

        while (!pq.empty() && ans.size() < 10) {
            auto t = pq.top();
            pq.pop();

            ans.push_back(t.second);

            int user = -1;

            for (int u : following[userId]) {
                if (!tweets[u].empty() &&
                    tweets[u].back().first == t.first) {
                    user = u;
                    break;
                }
            }

            if (user != -1) {
                tweets[user].pop_back();

                if (!tweets[user].empty())
                    pq.push(tweets[user].back());

                tweets[user].push_back(t);
            }
        }

        return ans;
    }

    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
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

12D 13:31:15

355. Design Twitter
Medium
Topics
premium lock icon
Companies
Design a simplified version of Twitter where users can post tweets, follow/unfollow another user, and is able to see the 10 most recent tweets in the user's news feed.

Implement the Twitter class:

Twitter() Initializes your twitter object.
void postTweet(int userId, int tweetId) Composes a new tweet with ID tweetId by the user userId. Each call to this function will be made with a unique tweetId.
List<Integer> getNewsFeed(int userId) Retrieves the 10 most recent tweet IDs in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user themself. Tweets must be ordered from most recent to least recent.
void follow(int followerId, int followeeId) The user with ID followerId started following the user with ID followeeId.
void unfollow(int followerId, int followeeId) The user with ID followerId started unfollowing the user with ID followeeId.
 

Example 1:

Input
["Twitter", "postTweet", "getNewsFeed", "follow", "postTweet", "getNewsFeed", "unfollow", "getNewsFeed"]
[[], [1, 5], [1], [1, 2], [2, 6], [1], [1, 2], [1]]
Output
[null, null, [5], null, null, [6, 5], null, [5]]

Explanation
Twitter twitter = new Twitter();
twitter.postTweet(1, 5); // User 1 posts a new tweet (id = 5).
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 1 tweet id -> [5]. return [5]
twitter.follow(1, 2);    // User 1 follows user 2.
twitter.postTweet(2, 6); // User 2 posts a new tweet (id = 6).
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 2 tweet ids -> [6, 5]. Tweet id 6 should precede tweet id 5 because it is posted after tweet id 5.
twitter.unfollow(1, 2);  // User 1 unfollows user 2.
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 1 tweet id -> [5], since user 1 is no longer following user 2.
 

Constraints:

1 <= userId, followerId, followeeId <= 500
0 <= tweetId <= 104
All the tweets have unique IDs.
At most 3 * 104 calls will be made to postTweet, getNewsFeed, follow, and unfollow.
A user cannot follow himself.
 
Accepted
395,545/862.2K
Acceptance Rate
45.9%
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
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
⌄
⌄
⌄
⌄
⌄
⌄
⌄
class Twitter {
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        
    }
    
    vector<int> getNewsFeed(int userId) {
        
    }
    
    void follow(int followerId, int followeeId) {
        
    }
    
    void unfollow(int followerId, int followeeId) {
        
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
Saved
Testcase
1
2
["Twitter","postTweet","getNewsFeed","follow","postTweet","getNewsFeed","unfollow","getNewsFeed"]
[[],[1,5],[1],[1,2],[2,6],[1],[1,2],[1]]
1/8 testcases
Line 1
Case 1
Copyright © 2026 LeetCode. All rights reserved.

4.9K


249
Search questions
