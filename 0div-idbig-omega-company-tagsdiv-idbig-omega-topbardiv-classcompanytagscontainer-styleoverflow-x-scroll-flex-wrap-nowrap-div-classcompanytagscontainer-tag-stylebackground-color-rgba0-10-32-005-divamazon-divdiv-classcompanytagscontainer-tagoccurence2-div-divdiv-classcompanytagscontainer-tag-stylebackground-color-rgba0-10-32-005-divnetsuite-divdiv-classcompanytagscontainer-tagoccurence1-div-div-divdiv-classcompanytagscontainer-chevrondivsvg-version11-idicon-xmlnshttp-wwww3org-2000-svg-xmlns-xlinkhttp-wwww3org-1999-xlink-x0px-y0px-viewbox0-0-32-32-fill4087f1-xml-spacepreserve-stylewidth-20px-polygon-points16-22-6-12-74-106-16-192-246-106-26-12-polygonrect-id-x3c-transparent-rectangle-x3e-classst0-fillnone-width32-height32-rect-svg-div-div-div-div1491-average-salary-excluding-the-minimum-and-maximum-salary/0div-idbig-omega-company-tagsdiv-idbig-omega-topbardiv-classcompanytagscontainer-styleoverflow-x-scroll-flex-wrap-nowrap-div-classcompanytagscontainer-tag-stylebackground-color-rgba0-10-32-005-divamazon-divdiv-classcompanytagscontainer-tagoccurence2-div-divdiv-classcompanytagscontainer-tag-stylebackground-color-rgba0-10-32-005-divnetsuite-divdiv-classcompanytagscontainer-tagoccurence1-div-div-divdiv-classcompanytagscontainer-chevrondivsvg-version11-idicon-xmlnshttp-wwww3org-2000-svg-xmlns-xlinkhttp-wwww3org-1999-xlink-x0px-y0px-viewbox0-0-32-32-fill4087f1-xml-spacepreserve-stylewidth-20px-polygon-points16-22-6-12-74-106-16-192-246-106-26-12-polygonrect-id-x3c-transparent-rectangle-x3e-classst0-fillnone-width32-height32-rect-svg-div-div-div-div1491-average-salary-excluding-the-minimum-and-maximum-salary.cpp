class Solution {
public:
    double average(vector<int>& v) {
        double ans = 0;
        
        sort(v.begin(), v.end());
        return (double) accumulate(v.begin()+1, v.end()-1, 0)/(double)(v.size()-2);
         
    }
};