class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int row = 0, col = 0, temp = 0; row < matrix[0].size() && col < matrix.size(); temp++){
            row = col = temp;
            for(; row < matrix[0].size() - temp; row++)
                ans.push_back(matrix[col][row]);
            row--; col++;
            if (ans.size() == matrix.size() * matrix[0].size())
                break;
            for(; col < matrix.size() - temp; col++)
                ans.push_back(matrix[col][row]);
            row--; col--;
            if (ans.size() == matrix.size() * matrix[0].size())
                break;
            for(; row >= temp; row--)
                ans.push_back(matrix[col][row]);
            row++; col--;
            if (ans.size() == matrix.size() * matrix[0].size())
                break;
            for(; col > temp; col--)
                ans.push_back(matrix[col][row]);      
            row++; col++;
            if (ans.size() == matrix.size() * matrix[0].size())
                break;
        }
        return ans;
    }
};
