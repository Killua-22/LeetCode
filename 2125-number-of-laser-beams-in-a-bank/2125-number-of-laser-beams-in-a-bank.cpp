class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        vector<int> arr;
        int ans = 0;
        if(n==1)
            return 0;
        for(int i=0; i<n; i++)
        {
            int count = 0;
            for(int j=0; j<bank[0].size(); j++)
            {
                if(bank[i][j] == '1')
                    count++;
            }
            // if(count == 0) continue;
            if(count !=0 )arr.push_back(count);
        }
        if(arr.size() == 0)
            return 0;
        for(int i=0; i<arr.size()-1; i++)
        {
            ans += arr[i+1] * arr[i];
        }
        
        
        return ans;
    }
};