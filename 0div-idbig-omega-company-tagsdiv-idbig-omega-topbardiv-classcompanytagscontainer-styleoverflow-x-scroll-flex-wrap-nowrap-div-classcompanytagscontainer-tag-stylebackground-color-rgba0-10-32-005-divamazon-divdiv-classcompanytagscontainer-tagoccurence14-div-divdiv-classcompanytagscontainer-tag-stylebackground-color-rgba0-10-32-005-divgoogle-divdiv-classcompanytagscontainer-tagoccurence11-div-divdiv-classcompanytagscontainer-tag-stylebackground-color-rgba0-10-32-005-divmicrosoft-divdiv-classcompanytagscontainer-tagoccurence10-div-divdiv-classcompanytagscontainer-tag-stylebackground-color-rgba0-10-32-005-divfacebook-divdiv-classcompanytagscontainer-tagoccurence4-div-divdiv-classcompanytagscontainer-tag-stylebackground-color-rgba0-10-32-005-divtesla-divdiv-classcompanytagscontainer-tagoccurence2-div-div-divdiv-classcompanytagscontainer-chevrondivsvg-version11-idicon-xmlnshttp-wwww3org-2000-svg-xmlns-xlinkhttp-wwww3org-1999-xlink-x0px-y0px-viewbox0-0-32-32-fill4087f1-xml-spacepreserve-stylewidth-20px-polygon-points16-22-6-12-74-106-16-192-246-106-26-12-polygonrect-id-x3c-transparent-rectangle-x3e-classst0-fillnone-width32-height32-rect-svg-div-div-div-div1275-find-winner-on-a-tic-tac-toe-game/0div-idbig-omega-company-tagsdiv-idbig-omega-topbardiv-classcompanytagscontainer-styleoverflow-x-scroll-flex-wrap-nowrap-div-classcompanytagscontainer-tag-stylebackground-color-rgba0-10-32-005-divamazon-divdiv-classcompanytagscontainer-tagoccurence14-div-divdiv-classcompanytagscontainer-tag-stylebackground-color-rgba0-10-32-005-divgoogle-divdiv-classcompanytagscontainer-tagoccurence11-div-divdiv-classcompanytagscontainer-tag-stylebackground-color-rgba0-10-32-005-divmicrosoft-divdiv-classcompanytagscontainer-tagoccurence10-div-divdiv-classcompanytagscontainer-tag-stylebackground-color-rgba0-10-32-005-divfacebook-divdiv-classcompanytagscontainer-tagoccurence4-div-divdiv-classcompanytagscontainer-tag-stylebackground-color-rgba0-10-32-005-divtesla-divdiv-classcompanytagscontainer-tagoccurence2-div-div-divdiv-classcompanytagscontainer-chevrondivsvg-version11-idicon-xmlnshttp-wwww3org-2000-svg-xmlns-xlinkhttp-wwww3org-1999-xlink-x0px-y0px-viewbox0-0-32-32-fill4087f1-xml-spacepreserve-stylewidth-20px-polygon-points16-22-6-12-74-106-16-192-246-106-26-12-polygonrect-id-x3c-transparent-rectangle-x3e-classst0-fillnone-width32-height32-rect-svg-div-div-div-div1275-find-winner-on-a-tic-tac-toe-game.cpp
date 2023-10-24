class Solution {
public:
    
//     void printboard(vector<vector<char>>& board)
//     {
//         for(int i=0; i<3; i++){
//             for(int j=0; j<3; j++)
//             {
                
//                 cout<<board[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
    
    bool checkWin(vector<vector<char>>& board, char player)
    {
        for(int i=0; i<3; i++)
        {
            if(board[i][0] == player && board[i][1] == player && board[i][2] == player)
                return true;
            if(board[0][i] == player && board[1][i] == player && board[2][i] == player)
                return true;
            
        }
        
        if(board[0][0] == player && board[1][1] == player && board[2][2] == player)
            return true;
        if(board[0][2] == player && board[1][1] == player && board[2][0] == player)
            return true;
        
        return false;
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        
        char first = 'X';
        char second = 'O';
        vector<vector<char>> board(3, vector<char>(3, ' '));
        
        
        for(int i=0; i<moves.size(); i++){
            if(i%2==1){
                board[moves[i][0]][moves[i][1]] = second;
            }else{
                board[moves[i][0]][moves[i][1]] = first;
            }
            
            if(i>=4){
                if(checkWin(board, first))  
                    return "A";
                else if(checkWin(board, second))
                    return "B";
            }
            // if(checkWin(board, first))  
            //     return "A";
            // else if(checkWin(board, second))
            //     return "B";  
            // printboard(board);
        }
        if(moves.size() < 9)
            return "Pending";
        return "Draw";
    }
};