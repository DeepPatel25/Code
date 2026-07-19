class User {
public:
    vector<pair<int,int>> tweets;
    unordered_set<int> followees;
};

class Twitter {
public:
    unordered_map<int,User> users;
    int time;
    int k;

    Twitter() {
        time = 0;
        k = 10;
    }
    
    void postTweet(int userId, int tweetId) {
        users[userId].tweets.push_back({++time, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        auto fetchUserTweets = [&pq, this](int _userId){
            for(auto tweet : users[_userId].tweets){
                pq.push(tweet);
                if(pq.size() > k) pq.pop();
            }
        };

        fetchUserTweets(userId);
        for(int followee : users[userId].followees)
            fetchUserTweets(followee);

        vector<int> res;
        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
    
    void follow(int followerId, int followeeId) {
        users[followerId].followees.insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        users[followerId].followees.erase(followeeId);
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