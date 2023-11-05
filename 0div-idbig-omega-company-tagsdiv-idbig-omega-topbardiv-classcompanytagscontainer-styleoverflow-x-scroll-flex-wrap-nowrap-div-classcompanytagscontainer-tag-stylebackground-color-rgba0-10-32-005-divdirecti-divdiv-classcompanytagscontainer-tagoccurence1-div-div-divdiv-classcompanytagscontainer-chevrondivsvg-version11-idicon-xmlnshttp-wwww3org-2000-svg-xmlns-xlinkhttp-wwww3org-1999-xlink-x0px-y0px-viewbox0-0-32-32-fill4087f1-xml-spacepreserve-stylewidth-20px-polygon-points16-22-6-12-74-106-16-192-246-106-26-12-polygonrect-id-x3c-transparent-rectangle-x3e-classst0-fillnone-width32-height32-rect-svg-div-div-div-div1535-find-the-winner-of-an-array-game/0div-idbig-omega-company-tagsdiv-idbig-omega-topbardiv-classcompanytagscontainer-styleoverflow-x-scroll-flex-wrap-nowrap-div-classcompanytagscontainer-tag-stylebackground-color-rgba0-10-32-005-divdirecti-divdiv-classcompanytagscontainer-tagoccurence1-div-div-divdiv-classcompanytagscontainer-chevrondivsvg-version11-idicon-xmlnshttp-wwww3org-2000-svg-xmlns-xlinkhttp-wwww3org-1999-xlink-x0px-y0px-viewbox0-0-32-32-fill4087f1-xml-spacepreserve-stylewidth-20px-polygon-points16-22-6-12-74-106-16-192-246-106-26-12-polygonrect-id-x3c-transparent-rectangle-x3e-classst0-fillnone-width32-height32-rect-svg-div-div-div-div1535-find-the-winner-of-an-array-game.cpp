class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        if(k==1)
            return max(arr[0], arr[1]);
        
        if(k>=arr.size())
            return *max_element(arr.begin(), arr.end());
        
        int curr_winner = arr[0];
        int con_win = 0;
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i] > curr_winner){
                curr_winner = arr[i];
                con_win = 1;
            }
            else
            {
                con_win++;
            }
            
            if(con_win == k)
                return curr_winner;
                
        }
        return curr_winner;
        
    }
};