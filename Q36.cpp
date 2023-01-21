class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    for (int n = 0; n < 9; n++)
    {
        bool checkR[10] = {}, checkC[10] = {};
        for (int i = 0; i < 9; i++) // row
        {
            if (board[n][i] == '.')
                continue;
            else if (checkR[board[n][i] - '0'] == 1)
                return false;
            else
                checkR[board[n][i] - '0'] = 1;
        }

        for (int i = 0; i < 9; i++) // column
        {
            if (board[i][n] == '.')
                continue;
            else if (checkC[board[i][n] - '0'] == 1)
                return false;
            else
                checkC[board[i][n] - '0'] = 1;
        }
    }
    
    for(int row = 1, col = 1; row < 9; col += 3)
    {
        if (col > 9)
            col = 1, row += 3;
        if(row > 9)
            break;
        bool check[10] = {};
        if (board[row][col] != '.')
            check[board[row][col] - '0'] = 1;

        for (int c = col, r = row - 1; c < col + 2; c++)
            if (board[r][c] == '.')
                continue;
            else if (check[board[r][c] - '0'] == 1)
                return false;
            else
                check[board[r][c] - '0'] = 1;
        for(int r = row, c = col + 1; r < row + 2; r++)
            if (board[r][c] == '.')
                continue;
            else if (check[board[r][c] - '0'] == 1)
                return false;
            else
                check[board[r][c] - '0'] = 1;
        for (int c = col, r = row + 1; c > col - 2; c--)
            if (board[r][c] == '.')
                continue;
            else if (check[board[r][c] - '0'] == 1)
                return false;
            else
                check[board[r][c] - '0'] = 1;
        for (int r = row, c = col - 1; r > row - 2; r--)
            if (board[r][c] == '.')
                continue;
            else if (check[board[r][c] - '0'] == 1)
                return false;
            else
                check[board[r][c] - '0'] = 1;
    }

    return true;
    }
};
