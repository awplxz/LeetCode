class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool a1[9][9] = {false},a2[9][9] = {false},a3[9][9]= {false};
        for(int i = 0; i < 9; i++){
            for(int j = 0;j < 9; j++){
                if(board[i][j]!='.'){
                    int num  = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
                    if(a1[i][num] || a2[j][num] || a3[k][num])
                        return false;
                    a1[i][num] = a2[j][num] = a3[k][num] = true;
                }
            }
        }
        return true;
        
    }
};