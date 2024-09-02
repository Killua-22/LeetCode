class TimeMap {
public:

    map<string, vector<pair<int, string>>> mp;

    TimeMap() {
        
    }

    void set(string key, string value, int timestamp) {

        mp[key].push_back(make_pair(timestamp, value));
 
    }
    
    string get(string key, int timestamp) {

        if(mp.find(key) == mp.end()) return "";

        vector<pair<int, string>>& temp = mp[key];
        int l = 0; 
        int r = temp.size()-1;
        string val = "";

        while(l <= r) {
            int mid = l + (r - l) / 2;

            if(temp[mid].first <= timestamp) {
                val = temp[mid].second;
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
        
        return val;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */