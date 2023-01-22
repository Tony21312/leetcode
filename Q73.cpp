class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>>pos;
        for(int i = 0; i < matrix.size(); i++)
            for(int j = 0; j < matrix[0].size(); j++)
                if(!matrix[i][j])
                    pos.push_back({i, j});
        for(auto it : pos)
        {
            for(int r = 0, c = it.second; r < matrix.size(); r++)
                matrix[r][c] = 0;
            for(int r = it.first, c = 0; c < matrix[0].size(); c++)
                matrix[r][c] = 0;
        }
    }
};
