class Twitter {
private:
    unordered_set<int> user[501];
    vector<pair<int, int>> TweetandUserId;

public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        TweetandUserId.push_back({tweetId, userId});

    }
    
    vector<int> getNewsFeed(int userId) {
        int t = TweetandUserId.size();
        vector<int> ans;
        for(int i=t-1; i>=0 && ans.size() < 10; i--) {
            if(TweetandUserId[i].second == userId || user[userId].find(TweetandUserId[i].second) != user[userId].end()) {
                ans.push_back(TweetandUserId[i].first);
            }
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        user[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        if(user[followerId].find(followeeId) != user[followerId].end())
            user[followerId].erase(followeeId);
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