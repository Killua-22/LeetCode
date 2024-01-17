class Solution {
private:
    map<string, string> storage;
    int id;
public:
    
    Solution() {
        id = 0;
    }
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrl = to_string(id);
        id++;
        storage[shortUrl] = longUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return storage[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));